#pragma once
#include "Grandparent and parents.h"
class Rabbit:public Herbivorous{
public:
  Rabbit(){ 
      int s=rand()%2,a=rand()%10,c=rand()%4;
      string color_c=color[c];
      age=a;
      string sex_s=sex[s];
      cout<<"Rabbit is "<<color_c<<" "<<age<<" year "<<"Sex:"<<sex_s<<endl;
  }
  void Home(){
      cout<<"Rabbit make the burrow"<<endl;
  }
  void Reproduce(int nr) override{
      cout<<"The rabbit gave birth to "<< nr <<" children\n";
  }
  void Eat() override{
      cout<<"Rabbit eat grass\n";
  }
  void Run() override{
      cout<<"Rabbit run from predator\n";
  }
  void Die(int nr) override{
      int d=nr;
      cout<<"Rabbit die because of "<<ndeath[d]<<endl;
  }
};