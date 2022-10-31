#pragma once
#include "Grandparent and parents.h"
class Lizard:public Carnivore{
 public:
  Lizard(){
      int s=rand()%2,c=5;
      string color_c=color[c];
      string sex_s=sex[s];
      cout<<"The lizard is "<<color_c<<" Sex:"<<sex_s<<endl;
  }
  void Hunt() override{
   cout<<"The lizard hunts the butterfly"<<endl;
  }
  void Reproduce(int nr) override{
      cout<<"The lizard laid "<< nr <<" eggs\n";
  }
  void Protect() override{
      cout<<"Lizard protects its territory\n";
  }
  void Die(int nr) override{
      int d=nr;
      cout<<"Lizard die because of "<<ndeath[d]<<endl;
  }
};