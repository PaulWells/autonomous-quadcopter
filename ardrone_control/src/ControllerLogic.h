#include "ros/ros.h"
#include "ardrone_control/ControlData.h"

class ControllerLogic{

    enum State {ON_GROUND, TAKING_OFF, HOVERING, LANDING};

    public:
    ControllerLogic(const ros::Publisher& twist_pub, const ros::Publisher& takeoff_pub, const ros::Publisher& land_pub);
    void update(const ardrone_control::ControlData data);

    private:
    void update_state(const ardrone_control::ControlData data);
    void respond(const ardrone_control::ControlData data);
    State state;
    ros::Publisher twist_pub;
    ros::Publisher takeoff_pub;
    ros::Publisher land_pub;
};
