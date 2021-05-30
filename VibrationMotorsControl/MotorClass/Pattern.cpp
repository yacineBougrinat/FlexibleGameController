#include "Arduino.h"
#include "Pattern.h"
#include "Node.h"
#include "QueueArray.h"
#include "Motor.h"

Pattern::Pattern(){}
Pattern::~Pattern(){}

/*void Pattern::setPatternLenght(int patternLength){
		_patternLenght=patternLength;
	}
*/	
	
QueueArray <Node> Pattern::setPattern(int amplitude[3],int duration[3]){
	QueueArray <Node> queue;
	for (int i=0;i<3;i++){
	Node node;
	node.setPatternNode(amplitude[i],duration[i]);
	queue.enqueue(node);
	Serial.println("amplitude");	
	Serial.println(amplitude[i]);
	Serial.println("duration");
	Serial.println(duration[i]);
	}
	Serial.println("Pattern_Lenght");
	Serial.println(queue.count());
	return queue;
}


/*QueueArray <Node> Pattern::setPattern(int* amplitude,int* duration){
	amplitude=new int[_patternLenght];
	duration=new int[_patternLenght];
	QueueArray <Node> queue;
	
	for (int i=0;i<_patternLenght;i++){
	Node node;
	node.setPatternNode(amplitude[i],duration[i]);
	queue.enqueue(node);
	}
	Serial.println("array_length");
	Serial.println(queue.count());
	return queue;
}
	
*/
