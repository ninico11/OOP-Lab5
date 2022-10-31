#pragma once
#include <Grandparent and parents.h>
class Deer:public Herbivorous{
public:
  Deer(){
      int s=rand()%2,a=rand()%10,c=rand()%2;
      string color_c=color[c];
      age=a;
      string sex_s=sex[s];
      cout<<"Deer is "<<color_c<<" "<<age<<" year "<<"Sex:"<<sex_s<<endl;
  }
  void Eat() override{
        cout<<"Deer eat grass\n";
  }
  void Reproduce(int nr) override{
      cout<<"The deer gave birth to "<< nr <<" children\n";
  }
  void Run() override{
      cout<<"Deer run from predator\n";
  }
  void Die(int nr) override{
      int d=nr;
      cout<<"Deer die because of "<<ndeath[d]<<endl;
  }
};