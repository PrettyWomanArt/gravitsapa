/*
 * rosserial Publisher Example
 * Prints "hello world!"
 */

// Use the following line if you have a Leonardo or MKR1000
//#define USE_USBCON

#include <ros.h>
#include <std_msgs/String.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Bool.h>
#include <Servo.h>

Servo eye_servo; 
Servo film_servo;

ros::NodeHandle nh;
std_msgs::Bool eye_status_msg;
std_msgs::Bool lips_status_msg;
ros::Publisher eye_status("eye_status_arduino", &eye_status_msg);
ros::Publisher lips_status("lips_status_arduino", &lips_status_msg);

void eye_ctrl_callback( const std_msgs::String& toggle_msg){
  if (toggle_msg == "open"){
    eye_servo.write(180)
  }
  elif (toggle_msg == "close") {
    eye_servo.write(0)
  }
}

void eye_ctrl_callback( const std_msgs::Int16& length){
  film_servo.write(length);
  
}

ros::Subscriber<std_msgs::String> eye_control("eye_control_arduino", &eye_ctrl_callback );
ros::Subscriber<std_msgs::Int16> film_control("film_control_arduino", &int16_msg );


void setup()
{
  eye_servo.attach(9);
  eye_servo.write(0)
  film_servo.attach(10);
  nh.initNode();
  nh.advertise(eye_status);
  nh.advertise(lips_status);
  nh.subscribe(eye_control);
  hn.subscribe(film_conrol);
}

void loop()
{
  str_msg.data = hello;
  chatter.publish( &str_msg );
  nh.spinOnce();
  delay(1000);
}