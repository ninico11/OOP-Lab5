#include "Grandparent and parents.h"
class Squirrel:public Herbivorous{
public:
  Squirrel(){
      int s=rand()%2,a=rand()%10,c=rand()%4;
      string color_c=color[c];
      age=a;
      string sex_s=sex[s];
      cout<<"Squirrel is "<<color_c<<" "<<age<<" year "<<"Sex:"<<sex_s<<endl;
  }
  void Reproduce(int nr) override{
      cout<<"The squirrel gave birth to "<< nr <<" children\n";
  }
  void Eat() override{
      cout<<"Squirrel eat  nuts"<<endl;
  }
  void Run() override{
      cout<<"Squirrel run from predator\n";
  }
  void Die(int nr) override{
      int d=nr;
      cout<<"Squirrel die because of "<<ndeath[d]<<endl;
  }
};