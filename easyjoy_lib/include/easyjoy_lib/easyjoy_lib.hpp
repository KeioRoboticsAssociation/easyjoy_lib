#pragma once
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joy.hpp"

class EasyJoyLib {
 public:
  EasyJoyLib();

 private:
  rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr joy_sub_;
  void joy_callback(const sensor_msgs::msg::Joy::SharedPtr msg);
};