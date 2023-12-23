#include <ros/ros.h>
#include <turtlesim/Pose.h>

#include "geometry_msgs/Twist.h"
#include "turtlesim/Spawn.h"

ros::Publisher pub;
ros::ServiceClient client1;

void turtleCallback(const turtlesim::Pose::ConstPtr& msg)
{
	geometry_msgs::Twist my_vel;
	my_vel.linear.x = 1.0;
	my_vel.angular.z = 1.0;
	pub.publish(my_vel);
	
	ROS_INFO("Turtle subscriber@[%f, %f, %f]",
	msg->x, msg->y, msg->theta);
}


int main (int argc, char **argv)
{
	ros::init(argc, argv, "turtlebot_subscriber");
	ros::NodeHandle nh;

	pub = nh.advertise<geometry_msgs::Twist>("robotics/cmd_vel", 1);
	client1 = nh.serviceClient<turtlesim::Spawn>("/spawn");

	turtlesim::Spawn srv1;

	srv1.request.x = 2;
	srv1.request.y = 2;
	srv1.request.theta = 0.0;
	srv1.request.name = "robotics";

	client1.call(srv1);
	ros::Subscriber sub = nh.subscribe("robotics/pose", 1,turtleCallback);
	ros::spin();
	return 0;
}
