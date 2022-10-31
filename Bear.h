#pragma once
#include "Grandparent and parents.h"
class Bear:public Carnivore{
 public:
  Bear(){
      int s=rand()%2,a=rand()%10,c=rand()%2;
      string color_c=color[c];
      age=a;
      string sex_s=sex[s];
      cout<<"Bear is "<<color_c<<" "<<age<<" year "<<"Sex:"<<sex_s<<endl;
  }
  void Eat() {
      cout<<"Bear eat honey"<<endl;
  }
  void Reproduce(int nr) override{
      cout<<"The bear gave birth to "<< nr <<" children\n";
  }
    void Hunt() override{
      cout<<"The bear hunt the deer"<<endl;
  }
  void Die(int nr) override{
      int d=nr;
      cout<<"Bear die because of "<<ndeath[d]<<endl;
  }
  void Protect() override{ 
      cout<<"Bear protects its territory\n";
  }
};