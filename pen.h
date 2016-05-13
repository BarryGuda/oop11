#ifndef PEN_H
#define PEN_H

#include<string>
class Pen {
    std::string pen_name;
public:
     pen(std::string pen_name = "Pen"){
      this->pen_name = pen_name;
    }
      std::string getName(){
        return pen_name;
      }
      virtual std::string drawLine();
      virtual std::string drawCircle();
};

#endif // PEN_H
