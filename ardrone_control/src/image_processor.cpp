#include "ros/ros.h"
#include "ImageConverter.h"
#include <image_transport/image_transport.h>

int main(int argc, char **argv)
{

    ros::init(argc, argv, "image_processor");
    ros::NodeHandle n;
    ImageConverter ic(n);

    ros::Rate loop_rate(10);

    ros::spin();
    return 0;
}
