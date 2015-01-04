#include "ros/ros.h"
#include "ardrone_control/ControlData.h"
#include <geometry_msgs/Twist.h>

class ControllerLogic{

    enum State {ON_GROUND, TAKING_OFF, HOVERING, APPROACHING_WALL, AT_CORNER, TURNING, WALL_TRACKING,LANDING};

    public:
    ControllerLogic(const ros::Publisher& twist_pub, const ros::Publisher& takeoff_pub, const ros::Publisher& land_pub);
    void update(const ardrone_control::ControlData data);

    private:
    void update_state(const ardrone_control::ControlData data);
    void respond(const ardrone_control::ControlData data);
    geometry_msgs::Twist addLinearX(geometry_msgs::Twist msg, const ardrone_control::ControlData data);
    geometry_msgs::Twist addLinearY(geometry_msgs::Twist msg, const ardrone_control::ControlData data);
    geometry_msgs::Twist addAngularZ(geometry_msgs::Twist msg, double turn_distance);
    State state;
    ros::Publisher twist_pub;
    ros::Publisher takeoff_pub;
    ros::Publisher land_pub;
    double last_command_time;
    double kp;
    double desired_wall_distance;
    double wall_distance_tolerance;
    double starting_rotZ;
};
