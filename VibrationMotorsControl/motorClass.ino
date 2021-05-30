#include <Motor.h>
#include <Node.h>
#include <Pattern.h>
#include <QueueArray.h>

Motor vibmotor(11);
Node node;
Pattern pattern;

int amplitude[3] = {100,0,250};
int duration[3] = {500,3000,1000};

void setup()
{
 Serial.begin(9600);
}  

void loop()
{  
  QueueArray <Node> p;
  p = pattern.setPattern(amplitude,duration);
  vibmotor.motorSetPattern(p);
  vibmotor.runMotor();
}


