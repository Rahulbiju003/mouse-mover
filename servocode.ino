
#include <Servo.h>

int pos = 0;

Servo servo_9;

void setup()
{
  
 servo_9.attach(9);//initialises the pin of the servo motor.

}

void loop()//loops the entire code within the parentheses.

{

  for (pos = 0; pos <= 180; pos += 1) {
  
  servo_9.write(pos);//gives the new position.
 
  delay(15);
    
 }
  
  delay(30000);//gives a delay of 30 min.
  
  for (pos = 180; pos >= 0; pos -= 1) {
    
  servo_9.write(pos);//gives the new position.
   
  delay(15); 
    
 }
  delay(30000);//gives a delay of 30 min.
