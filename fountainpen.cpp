#include<string>
#include "fountainpen.h"
virtual std::string FountainPen::drawLine(){
    return getName().append("draws a line");
  }
  virtual std::string FountainPen::drawCircle(){
    return getName().append("draws a circle.");
  }
