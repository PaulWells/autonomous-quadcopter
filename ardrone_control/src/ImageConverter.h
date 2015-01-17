#include <ros/ros.h>
#include <image_transport/image_transport.h>

static const std::string OPENCV_WINDOW = "Image window";

class ImageConverter
{
public:
    ImageConverter(const ros::NodeHandle& n);
    ~ImageConverter();
    void imageCb(const sensor_msgs::ImageConstPtr& msg);
    
private:
    ros::NodeHandle nh_;
    image_transport::ImageTransport it;
    image_transport::Subscriber image_sub;
    image_transport::Publisher image_pub;
};
    
        

