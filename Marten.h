#pragma once
#include "Grandparent and parents.h"
class Marten:public Carnivore{
public:
  Marten(){
      int s=rand()%2,a=rand()%10,c=rand()%3;
      string color_c=color[c];
      age=a;
      string sex_s=sex[s];
      cout<<"Marten is "<<color_c<<" "<<age<<" year "<<"Sex:"<<sex_s<<endl;
  }
  void Hunt() override{
      cout<<"The marten hunt the squirrel"<<endl;
  }
  void Reproduce(int nr) override{
      cout<<"The marten gave birth to "<< nr <<" children\n";
  }
  void Die(int nr) override{
      int d=nr;
      cout<<"Marten die because of "<<ndeath[d]<<endl;
  }
  void Protect() override{
      cout<<"Marten protects its territory\n";
  }
};