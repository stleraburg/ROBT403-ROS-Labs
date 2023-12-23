#include "ros/ros.h"
#include "std_msgs/Int64.h"

void chatterCallback(const std_msgs::Int64::ConstPtr& msg)
{
  ROS_INFO("I heard: [%lld]", msg->data);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "subscriber");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("ZabirovaKostyukova", 1000, chatterCallback);
  ros::spin();

  return 0;
}
