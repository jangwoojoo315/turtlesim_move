#include "ros/ros.h"
#include "geomerty_msgs/Twist.h"
ros::Publisher velocity_publisher;
//method to move th robot straight
void move(double speed, double distance,bool isForward);


int main(int argc,char **argv)
{
    ros::init(argc,argv,"robot_cleaner");
    ros::NodeHandle n;
    velocity_publisher=n.advertise<geomerty_msgs::Twist>("/turtle1/cmd_vel",20);
}
void move(double speed, double distance,bool isForward){
  geometry_msgs::Twist vel_msg;
}