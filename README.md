# AV NMP Control Systems

## Introduction
The control systems team deals with path planning, motion planning and interfacing with the actuation and ECU over the car to control steering, throttle and brake. In this NMP, you'll learn the basics of ROS2, Nav2 (ROS's navigation stack), and Gazebo.

## Brief
### Installation

Start by installing each of the packages listed below. We recommend using Ubuntu(at least 18.04) as thats what ROS2 is optimised for.

ROS2: https://docs.ros.org/en/rolling/Installation/Ubuntu-Install-Binary.html

Gazebo: https://gazebosim.org/tutorials?cat=guided_b&tut=guided_b1

Nav2: https://navigation.ros.org/getting_started/index.html

Verify everything works by performing basic navigation with Nav2 (There is a detailed guide provided in the Nav2 link). 

### The Task
Nav2 is a navigation stack for ROS2 using to compute paths and move a robot from point A to point B. The documentation is quite detailed and I recommend you read through them (although you don't need them all). The behaviour of Nav2 can be modified using plugins, and you'll be writing a new Planner Plugin. Here is a basic guide that implements a straight line planner plugin:

https://navigation.ros.org/plugin_tutorials/docs/writing_new_nav2planner_plugin.html


![image](https://user-images.githubusercontent.com/29827456/135697568-465c608e-f557-4e99-bcab-23cb054909c8.png)

The files for this plugin are in this repository: https://github.com/ros-planning/navigation2_tutorials/tree/master/nav2_straightline_planner

Work your way through the code + explanations provided in the tutorial (or feel free to start from scratch) and understand what is happening (the tutorial explains each method separately). 

When you have understood how planner plugins are made and the different components, your task is to modify the plugin provided and implement your own path planning algorithm. It can be anything you like (Shortest path, Djikstra, A*, PRM, RRT*)

### Submission
Fork this repo and clone it. And then work on this repo. Submission should include all your project files, and any extra dependencies you've added on top of it (and how to use them).
