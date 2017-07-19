// This program generates log messages at varying severity
// levels, throttled to various maximum sppeds

#include <ros/ros.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "log_throttled");
  ros::NodeHandle nh;

  while(ros::ok()) {
    ROS_DEBUG_STREAM_THROTTLE(0.1,
      "This DEBUG_STREAM appears every 0.1 seconds.");
    ROS_INFO_STREAM_THROTTLE(0.3,
      "This INFO_STREAM appears every 0.3 seconds.");
    ROS_WARN_STREAM_THROTTLE(0.5,
      "This WARN_STREAM appears every 0.5 seconds.");
    ROS_ERROR_STREAM_THROTTLE(1.0,
      "This ERROR_STREAM appears every 1.0 seconds.");
    ROS_FATAL_STREAM_THROTTLE(2.0,
      "This FATAL_STREAM appears every 2.0 seconds.");
  }
}
