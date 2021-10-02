# AV NMP Control Systems

## Introduction
The control systems team deals with path planning, motion planning and interfacing with the actuation and ECU over the car to control steering, throttle and brake. In this NMP, you'll learn the basics of ROS2, Nav2 (ROS's navigation stack), and Gazebo.

## Brief
### Installation

Start by installing each of the packages listed below. We recommend using Ubuntu(at least 18.04) as thats what ROS2 is optimised for.

ROS2: https://docs.ros.org/en/galactic/Installation/Ubuntu-Install-Binary.html

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
Fork this repo and clone it, and then work on the repo. Submission should include all your project files, and any extra dependencies you've added on top of it (and how to use them).

## References and useful stuff
**ROS2 Docs**

Important
- Configuring ROS environment: https://docs.ros.org/en/galactic/Tutorials/Configuring-ROS2-Environment.html

Just understanding the below concepts and the commands to interact with them should be enough (but feel free to execute them on the turtlesim if you want). 
- ROS2 Nodes: https://docs.ros.org/en/galactic/Tutorials/Understanding-ROS2-Nodes.html
- ROS2 Topics: https://docs.ros.org/en/galactic/Tutorials/Topics/Understanding-ROS2-Topics.html
- ROS2 Actions: https://docs.ros.org/en/galactic/Tutorials/Understanding-ROS2-Actions.html
- ROS2 Param: https://docs.ros.org/en/galactic/Tutorials/Parameters/Understanding-ROS2-Parameters.html
- ROS2 Plugins (ties into the Nav2 one as well): https://docs.ros.org/en/galactic/Tutorials/Pluginlib.html

Good to know (but not necessary)
- ROS2 Turtlesim https://docs.ros.org/en/galactic/Tutorials/Turtlesim/Introducing-Turtlesim.html
- ROS2 Launch Files (not necessary but could make life easier so you don't have to enter a million commands): https://docs.ros.org/en/galactic/Tutorials/Launch-Files/Creating-Launch-Files.html
- ROS2 Creating Workspace https://docs.ros.org/en/galactic/Tutorials/Workspace/Creating-A-Workspace.html
- ROS2 Creating ROS Package (if you decide not to build off nav_2_straight): https://docs.ros.org/en/galactic/Tutorials/Creating-Your-First-ROS2-Package.html

**Nav2**
- Everything from installation to executing path planning: https://navigation.ros.org/getting_started/index.html#getting-started
- Only need to understand action servers (same as before) + planning section
https://navigation.ros.org/concepts/index.html
- Explains the nav2_straightline_planner plugin code: https://navigation.ros.org/plugin_tutorials/docs/writing_new_nav2planner_plugin.html
- Example path plugins using A*, Djikstra and others: https://navigation.ros.org/plugins/index.html#planners
