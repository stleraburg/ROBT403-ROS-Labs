# Comments 
The repo includes seven lab works accoplished for ROBT403 Robotics II course. The focus of the labs was on learning ROS framework through planar 5DOF snake robot and differential-drive mobile TurtleBot3 Burger robot.
More detailed reports are includede as .pdf files in each lab folder. 

## Lab 1
In his laboratory, we delved into core concepts of the Robot Operating System (ROS). We grasped the fundamentals of message communication, mastering the publisher-subscriber model. Additionally, we explored ROS services, 
gaining insight into remote procedure calls. By simulating a 2D turtle and controlling its motion, we experienced practical robotic control. These exercises provided hands-on familiarity with ROS’s power, 
setting the stage for more advanced applications in robotics and automation.

https://github.com/stleraburg/ROBT403-ROS-Labs/assets/94596396/b0eba4d5-61a3-4ee8-afed-f65bd7f416ec


## Lab 2
In this lab project, we explored various aspects of robot manipulator control in joint space. We implemented control strategies, visualized responses, and simulated robotic movements. 
Through these tasks, we gained practical insights into fundamental robotic control concepts and their real-world applications.

https://github.com/stleraburg/ROBT403-ROS-Labs/assets/94596396/d872463e-3f13-4511-941e-f48e6be528ed

## Lab 3
This laboratory project focused on the Cartesian space
control of a snake robot’s end-effector using the MoveIt
library. By configuring the MoveIt library for the robot’s
end-effector control, we successfully employed it to plan,
control, and navigate in the Cartesian space. We demonstrated
the capabilities of Cartesian control by making the robot’s
end-effector draw different shapes and follow specific paths,
including movement along the x-axis, drawing a rectangle, and
tracing a circular path. The implementation involved coding
in C++ and utilizing ROS tools like RViz for simulation. This
project not only enhanced our understanding of robotic control
in Cartesian space but also provided practical insights into
configuring and utilizing the MoveIt library for efficient robot
motion planning and execution.

https://github.com/stleraburg/ROBT403-ROS-Labs/assets/94596396/9ee83f72-0878-45d6-bc0e-069b09092fa2


## Lab 4

In this lab project we used a configured MoveIt library
to control a snake robot in Cartesian space, publishing co-
ordinates for the robot’s end-effector to follow a rectangular
path in the XY plane. Our node written as a C++ script
utilized MoveIt and the ”/joint states” topic to retrieve and
store the end-effector’s x- and y-coordinates as well as the
joint angles, respectively. The recorded data was then stored
in a rosbag file. This file captures essential information such
as sensor readings and message exchanges, enabling offline
analysis and testing of algorithms without the need for the
physical robot. The rosbag was subsequently converted to a
CSV format for visualization. MATLAB was employed to plot
and analyze the end-effector’s position and joint angles over
time, revealing a clear trajectory of the robot’s movement.
Future work may involve further exploration of different robot trajectories and the application of advanced control strategies
for more complex movements.

https://github.com/stleraburg/ROBT403-ROS-Labs/assets/94596396/71721a45-3b66-4aa3-a244-8de725d6d8df


## Lab 5
In conclusion, the process of bringing up the TurtleBot3
Burger involved a series of steps, including robot assem-
bly, PC setup, Single Board Computer (SBC) and OpenCR
configuration, and the binding of the PC and Raspberry
Pi. Through hardware assembly, software installations, and
network configurations, we successfully created a functional
and interconnected robotic system. The detailed specifications
of the TurtleBot3 Burger were analyzed, providing information
into its dimensions, weight, and key hardware components.
The software setup on the PC and Raspberry Pi, including the
installation of ROS packages and configuration of network
settings, laid the foundation for communication between the
devices. The integration of the OpenCR controller, Raspberry
Pi, and LIDAR sensor demonstrated the collaborative function-
ality of these components. The teleoperation of the TurtleBot3
Burger using a keyboard showed the robot’s responsiveness to
dynamic velocity commands. Overall, this laboratory project
has provided a hands-on experience in setting up and con-
trolling a differential-driven mobile robot, offering valuable
insights into robotics, ROS, and the TurtleBot3 platform. The
further steps will include navigation and path planning in the
labyrinth environment.

https://github.com/stleraburg/ROBT403-ROS-Labs/assets/94596396/239ca7d0-d056-4f8f-aa8a-14b2fce75ee6

## Lab 6
In this laboratory, we implemented SLAM for a TurtleBot3
robot to navigate through a maze. The SLAM process involved
control using keyboard teleoperation. The resulting map was
saved and further edited for clarity. Further refinement of
parameters is planned for subsequent laboratory sessions to ad-
dress oscillations and obstacle proximity challenges observed
during initial navigation attempts.

https://github.com/stleraburg/ROBT403-ROS-Labs/assets/94596396/846fe70e-39af-441b-aaec-b0b727f6898a

## Lab 7

The laboratory project focused on tuning the DWA pa-
rameters for the TurtleBot3 mobile robot, optimizing its
performance in maze navigation. Through the adjustment of
key parameters, including inflation radius, cost scaling factor,
simulation time, and goal tolerances, the robot successfully
navigated the maze with a runtime of 2 minutes and 55 sec-
onds. However, challenges such as varying lighting conditions
and uneven surfaces posed difficulties for the LiDAR sensor
and the robot’s movements. Despite these challenges, our team
collaboratively addressed parameter tuning, highlighting the
importance of careful parameter selection for effective mobile
robot navigation.

https://github.com/stleraburg/ROBT403-ROS-Labs/assets/94596396/9a1c07cc-fdfc-40cc-bf81-cff646b0e07b




