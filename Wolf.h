#pragma once
#include "Grandparent and parents.h"
class Wolf:public Carnivore{
 public:
  Wolf(){
      int s=rand()%2,a=rand()%10,c=rand()%4;
      string color_c=color[c];
      age=a;
      string sex_s=sex[s];
      cout<<"Wolf is "<<color_c<<" "<<age<<" year "<<"Sex:"<<sex_s<<endl;
  }
  void Hunt() override{
      cout<<"The wolf hunt the deer"<<endl;
  }
  void Protect() override{
      cout<<"Wolf defend the tribe"<<endl;
  }
  void Reproduce(int nr) override{
      cout<<"The wolf gave birth to "<< nr <<" children\n";
  }
  void Die(int nr) override{
      int d=nr;
      cout<<"Wolf die because of "<<ndeath[d]<<endl;
  }
};