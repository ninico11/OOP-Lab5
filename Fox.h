#pragma once
#include "Grandparent and parents.h"
class Fox:public Carnivore{
public:
  Fox(){
      int s=rand()%2,a=rand()%10,c=rand()%5;
      string color_c=color[c];
      age=a;
      string sex_s=sex[s];
      cout<<"Fox is "<<color_c<<" "<<age<<" year "<<"Sex:"<<sex_s<<endl;
  }
  void Hunt() override{
      cout<<"The fox hunt the rabbit"<<endl;
  }
  void Reproduce(int nr) override{
      cout<<"The fox gave birth to "<< nr <<" children\n";
  }
  void Die(int nr) override{
      int d=nr;
      cout<<"Fox die because of "<<ndeath[d]<<endl;
  }
  void Protect() override{
      cout<<"Fox protects its territory\n";
  }
};