#pragma once
class Butterfly{
public:
  string color;
  Butterfly( ){
   color="orange";
   cout<<"The butterfly is "<<color<<endl;
  }
  void Pollinate(){
   cout<<"Butterfly pollinate"<<endl;
  }
};