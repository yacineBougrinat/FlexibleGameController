#include "Arduino.h"
#include "Node.h"




Node::Node(){}
Node::~Node(){}

void Node::setPatternNode(int amplitude,int duration){
	_amplitude=amplitude;
	_duration=duration;
}

