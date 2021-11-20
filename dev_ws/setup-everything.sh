source ./install/setup.bash
export TURTLEBOT3_MODEL=waffle
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:/opt/ros/galactic/share/turtlebot3_gazebo/models
source /usr/share/gazebo/setup.sh
ros2 launch nav2_bringup tb3_simulation_launch.py params_file:=./src/navigation2_tutorials/nav2_straightline_planner/nav2_params.yaml
