#include "Arduino.h"
#include "Motor.h"
#include "QueueArray.h"
#include "Node.h"
#include "Pattern.h"

Motor::Motor(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

Motor::~Motor(){}
void Motor::runMotor(){
 
     if(isMotorActive){
	    Node node;
		node=currentPattern.dequeue(); 
		Serial.println("here1");
		if(patternStartTime < node._duration)
			{
			analogWrite(_pin,node._amplitude);
			Serial.println("amplitude_runMotor");
	        Serial.println(node._amplitude);
			Serial.println("duration_runMotor");
	        Serial.println(node._duration);
			} 
		else 
			{
		    Serial.println("here2");
			currentPattern.dequeue();
				if(currentPattern.isEmpty()){
				isMotorActive = false;
				Serial.println("here3");
				}
			}
		Serial.println("here4");
		Serial.println("here5");
		
	}
	Serial.println("here6");
 }

void Motor::motorSetPattern(QueueArray <Node> p){
	currentPattern = p;
	Serial.println("pArray_lenght");
	Serial.println(p.count());
	isMotorActive = true;
	patternStartTime = millis();	
}

	
/*

 void Motor::runMotor(){
 
     if(isMotorActive){
		if(patternStartTime < currentPattern[currentPatternNodeIndex].duration){
			analogWrite(_pin,currentPattern[currentPatternNodeIndex].amplitude);
		} else{
			currentPatternNodeIndex = currentPatternNodeIndex + 1;
			if(currentPatternNodeIndex >= currentPattern.length ){
				isMotorActive = false;
				currentPatternNodeIndex = -1;
				currentPattern = null;
			}
		}
	}
 }

	
}


void Motor::runMotor(){
 
     if(isMotorActive){
		if(patternStartTime < PatternNode.duration[currentPatternNodeIndex]){
			analogWrite(_pin,PatternNode.amplitute[currentPatternNodeIndex]);
		} else{
			currentPatternNodeIndex = currentPatternNodeIndex + 1;
			if(currentPatternNodeIndex >= currentPattern.length ){
				isMotorActive = false;
				currentPatternNodeIndex = -1;
			}
		}
	}
}

void Motor::setPattern(){
	isMotorActive = true;
	currentPatternNodeIndex = 0;
	unsigned long patternStartTime = millis();		
}
*/









 