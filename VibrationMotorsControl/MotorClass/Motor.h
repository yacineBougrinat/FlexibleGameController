#ifndef Motor_h
#define Motor_h

#include "Arduino.h"
#include "QueueArray.h"
#include "Node.h"
#include "Pattern.h"

class Motor
{
 public:
    Motor(int pin);
   ~Motor();
    void runMotor();
    int _pin;
    bool isMotorActive;
    void motorSetPattern(QueueArray <Node> p);
	QueueArray <Node> currentPattern;
	unsigned long patternStartTime;

};

#endif




