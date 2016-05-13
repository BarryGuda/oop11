#include<iostream>
#include<string>
#include "pen.h"
#include "fountainpen.h"
#include "rollerballpen.h"

using namespace std;
void WriteWithPen(Pen &pen){
    cout<<pen.drawLine()<<endl;
    cout<<pen.drawCircle()<<endl;


}
  int main(){
     FountainPen fp;
     WriteWithPen(fp);
     const char * WriteWithPen(rbp);
     RollerBallPen rbp("A Pen that uses a Roller Ball");
     Pen pen;
     WriteWithPen(pen);
  };






