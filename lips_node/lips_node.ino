#include "user_config.h"
#include <ros2arduino.h>


#define XRCEDDS_PORT  Serial
#define PUBLISH_FREQUENCY 2 //hz
int inputPin = 3;  
int ledPin = 13;    

void publishString(std_msgs::String* msg, void* arg)
{
  (void)(arg);
  int val = digitalRead(inputPin);
  if (val == HIGH) {    
    digitalWrite(ledPin, LOW);            // check if the input is HIGH
    sprintf(msg->data, "True");      // turn LED OFF
  } else {
    digitalWrite(ledPin, HIGH);     // turn LED ON
    sprintf(msg->data, "False"); 
  }
  
}

class StringPub : public ros2::Node
{
public:
  StringPub()
  : Node("ros2arduino_pub_node")
  {
    ros2::Publisher<std_msgs::String>* publisher_ = this->createPublisher<std_msgs::String>("lips_status");
    this->createWallFreq(PUBLISH_FREQUENCY, (ros2::CallbackFunc)publishString, nullptr, publisher_);
  }
};

void setup() 
{
  XRCEDDS_PORT.begin(115200);
  while (!XRCEDDS_PORT); 

  ros2::init(&XRCEDDS_PORT);
}

void loop() 
{
  static StringPub StringNode;

  ros2::spin(&StringNode);
}
