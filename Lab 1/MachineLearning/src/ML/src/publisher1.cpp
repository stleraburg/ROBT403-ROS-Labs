#include "ros/ros.h"
#include "std_msgs/Int64.h"
#include <vector>
#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "publisher1");
  ros::NodeHandle n;
  ros::Publisher chatter_pub = n.advertise<std_msgs::Int64>("ZabirovaKostyukova", 1000);

  ros::Rate loop_rate(50); //50 Hz

  int count = 0;
  while (ros::ok())
  {
    std_msgs::Int64 msg;

    int data[] = {2, 0, 1, 8, 7, 4, 1, 0, 9};
   
    if (count>8){
	count = 0;
}
    msg.data = data[count];
	

    
    ROS_INFO("%lld", msg);
    chatter_pub.publish(msg);
    loop_rate.sleep();
    ros::spinOnce();
    
    ++count;
  }


  return 0;
}
