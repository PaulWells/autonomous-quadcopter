#include "ros/ros.h"
#include "ardrone_control/ControlData.h"
#include <geometry_msgs/Twist.h>

class ControllerLogic{

    enum State {ON_GROUND, TAKING_OFF, HOVERING, APPROACHING_WALL, WALL_TRACKING};

    public:
    ControllerLogic(const ros::Publisher& twist_pub, const ros::Publisher& takeoff_pub, const ros::Publisher& land_pub);
    void update(ardrone_control::ControlData data);

    private:
    void respond(const ardrone_control::ControlData& data);
    void smoothDistances(ardrone_control::ControlData& data);
    double smooth(double distance, double history[]);
    geometry_msgs::Twist addLinearX(geometry_msgs::Twist msg, const ardrone_control::ControlData data, double kp);
    geometry_msgs::Twist addPDX(geometry_msgs::Twist msg, const ardrone_control::ControlData data, double kp, double kd);
    geometry_msgs::Twist addLinearY(geometry_msgs::Twist msg, const ardrone_control::ControlData data);
    geometry_msgs::Twist addAngularZ(geometry_msgs::Twist msg, const ardrone_control::ControlData data);
    double getForwardDistance(double sensor_distance);
    State state;
    ros::Publisher twist_pub;
    ros::Publisher takeoff_pub;
    ros::Publisher land_pub;
    ros::Time start_time;
    double kp_wall_distance;
    double kp_approach_wall;
    double kd_approach_wall;
    double kp_tracking_speed;
    double kp_angular;
    double desired_wall_distance_front;
    double desired_wall_distance_side;
    double wall_distance_tolerance;
    double front_sensor_angle;
    int distance_history_size;
    double distance_history_front_left[5];
    double distance_history_front_right[5];
    double distance_history_front[5];
    int iteration_number;
    double last_approach_wall_error;
};
