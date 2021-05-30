#ifndef Node_h
#define Node_h

#include "Arduino.h"

class Node
{
 public:
   Node();
  ~Node();
   int amplitude;
   int duration;
   void setPatternNode(int amplitude,int duration);
   int _amplitude;
   int _duration;
   
};

#endif