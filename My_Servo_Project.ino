#include <Servo.h> //Servo Library
Servo servo1; 

int pirPin = 7; //digital 7

void setup()
{
 Serial.begin(9600); 
 
 servo1.attach(9); //Attach servo motor to Digital pin 9
 
 pinMode(pirPin, INPUT);
}


void loop()
{
  int position;
  int pirVal = digitalRead(pirPin);

//If PIR sensor give LOW then move servo angle to position 0.
  if(pirVal == LOW)
    { 
      servo1.write(0);
      delay(200);
      Serial.println("Motion Not Detected");
    }
    
//If PIR sensor give HIGH then move servo angle to position 180.    
      if(pirVal == HIGH)
      {
        servo1.write(180);
        delay(1000);
        Serial.println("Motion Detected"); 
      }
      
}


