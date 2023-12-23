#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include "std_msgs/Float64MultiArray.h" 

#include "math.h"
#include <iostream>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit_msgs/DisplayRobotState.h>
#include <moveit_msgs/DisplayTrajectory.h>
#include <moveit_msgs/AttachedCollisionObject.h>
#include <moveit_msgs/CollisionObject.h>
// Main moveit libraries are included
std_msgs::Float64MultiArray new_msg;
//std_msgs::Float64MultiArray new_msg_2;
std_msgs::Float64MultiArray new_msg_2;

void chatterCallback(const sensor_msgs::JointState::ConstPtr& msg) {
	ROS_INFO("I heard: [%f, %f, %f, %f, %f]", msg->position[0],msg->position[1],msg->position[2],msg->position[3],msg->position[4]);
	new_msg_2.data.resize(4);
	new_msg_2.data = msg->position;
	
}


int main(int argc, char **argv)
{
	ros::init(argc, argv, "publisher");
	ros::NodeHandle node_handle;
	ros::AsyncSpinner spinner(0);
	ros::Rate loop_rate(50); //Frequency
	
	ros::Publisher pub = node_handle.advertise<std_msgs::Float64MultiArray>("/publisher", 1000);
	ros::Subscriber sub = node_handle.subscribe("/joint_states", 1000, chatterCallback);
	//ros::Subscriber sub_1 = node_handle.subscribe("/joint2/state", 1000, chatterCallback);

	spinner.start(); // For moveit implementation we need AsyncSpinner, we cant use ros::spinOnce()
	//ros::Subscriber sub = node_handle.subscribe("/positions", 1000, chatterCallback2);
	static const std::string PLANNING_GROUP = "snake_robot"; /* Now we specify with what group we want work, here group1 is the name of my group controller*/
	moveit::planning_interface::MoveGroupInterface move_group(PLANNING_GROUP); // loading move_group
	
	const robot_state::JointModelGroup *joint_model_group =move_group.getCurrentState()->getJointModelGroup(PLANNING_GROUP); //For joint control
	geometry_msgs::PoseStamped current_pose;
	
	current_pose = move_group.getCurrentPose(); 
	
	while (ros::ok()){
		// std_msgs::Float64MultiArray array;
		current_pose = move_group.getCurrentPose();
		new_msg.data.resize(2);
		new_msg.data[0] = current_pose.pose.position.x;
		new_msg.data[1] = current_pose.pose.position.y;
		new_msg.data = new_msg.data;
		pub.publish(new_msg);
		new_msg_2.data = new_msg_2.data;
        pub.publish(new_msg_2);
		
		ros::spinOnce();
		loop_rate.sleep();

		
	}
	
  	ROS_INFO("Done");
 	ros::shutdown();

  	return 0;
}

