#include "RangeDataCollector.h"
#include "ros/ros.h"
#include <ros/console.h>
#include "ardrone_control/Distances.h"
#include "sensor_msgs/Range.h"

RangeDataCollector::RangeDataCollector(const ros::Publisher& pub)
{
    this->pub = pub;
    this->history_size = 5; //The arduino should run this many times faster thanthe controller
    this->filter = MEDIAN;
    clearHistories();
}

void RangeDataCollector::clearHistory(double history[])
{
    for(int i = 0; i < this->history_size; i++)
    {
        history[i] = 0;
    }
}

void RangeDataCollector::clearHistories()
{
    clearHistory(this->front_left_history);
    clearHistory(this->front_right_history);
    clearHistory(this->front_history);
    this->num_distances_front = 0;
    this->num_distances_front_left = 0;
    this->num_distances_front_right = 0;
    this->front_present = false;
    this->front_left_present = false;
    this->front_right_present = false;
}

double RangeDataCollector::rangeCallback(const sensor_msgs::Range dist, int& count, double history[])
{
    
    int index = count % this->history_size;
    history[index] = dist.range;
    count++;

    if(count < this->history_size)
    {
        return -1;
    } 
    
    this->combined_dist.header = dist.header;
    return smooth(history);
}

void RangeDataCollector::rangeFrontLeftCallback(const sensor_msgs::Range dist)
{
    double distance = rangeCallback(dist, this->num_distances_front_left, this->front_left_history);
    if(distance > 0)
    {
        this->combined_dist.front_left_sensor = distance;
        this->front_left_present = true;
        sendDataIfReady();
    }
}

void RangeDataCollector::rangeFrontRightCallback(const sensor_msgs::Range dist)
{
   double distance = rangeCallback(dist, this->num_distances_front_right, this->front_right_history);
    if(distance > 0)
    {
        this->combined_dist.front_right_sensor = distance;
        this->front_right_present = true;
        sendDataIfReady();
    }
}

void RangeDataCollector::rangeFrontCallback(const sensor_msgs::Range dist)
{
    
    double distance = rangeCallback(dist, this->num_distances_front, this->front_history);
    //ROS_INFO("front distance: %f", distance);
    if(distance > 0)
    {
        this->combined_dist.front_sensor = distance;
        this->front_present = true;
        sendDataIfReady();
    }
}

double RangeDataCollector::smooth(double history[])
{
    switch(this->filter)
    {
        case(NONE):
        {
            return history[this->history_size-1];
        }
        case(MEAN):
        {
            return meanFilter(history);
        }
        case(MEDIAN):
        {
            return medianFilter(history);
        }
    }
    
}

double RangeDataCollector::meanFilter(double history[])
{
    double sum = 0;
    int size = this->history_size;
    for(int i = 0; i < size; i++)
    {
        sum+=history[i];
        //ROS_INFO("history at %d: %f", i, history[i]);
    }
    //ROS_INFO("mean: %f", sum/size);
    return sum/size;
}

// Assumes the number of items in history is odd
double RangeDataCollector::medianFilter(double history[])
{
    for(int i = 0; i < this->history_size; i++)
    {
        int num_above = 0;
        int num_below = 0;
        int num_equal = 0;
        double current_distance = history[i];
        for(int j=0; j < this->history_size; j++)
        {
            if(history[j] < current_distance)
            {
                num_below++;
            }
            else if(history[j] > current_distance)
            {
                num_above++;
            }
            else if(history[j] == current_distance && j != i)
            {
                num_equal++;
            }
        }
        
        // Condition for if current distance is the median
        if(abs(num_above - num_below) <= num_equal)
        {       
            for(int i = 0; i < this->history_size; i++)
            {
                //ROS_INFO("item at %d: %f", i, history[i]);
            }
            //ROS_INFO("median is %f", current_distance);  
            return current_distance; 
        }
    }
    //ROS_INFO("NO MEDIAN WAS CHOSEN!!!!");
    return history[this->history_size-1];
}

void RangeDataCollector::sendDataIfReady()
{
    if(front_left_present && front_right_present && front_present)
    {
        pub.publish(combined_dist);
        clearHistories();
    }
}

