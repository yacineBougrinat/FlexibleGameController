#ifndef Pattern_h
#define Pattern_h

#include "Arduino.h"
#include "Node.h"
#include "QueueArray.h"
#include "Motor.h"

class Pattern
{
	public:
		Pattern();
		~Pattern();
		QueueArray <Node> setPattern(int amplitude[3],int duration[3]); 
		//int patternLenght;
		//int _patternLenght;
		// void setPatternLenght(int patternLength);
		
};

#endif


