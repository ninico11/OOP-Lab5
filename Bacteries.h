#pragma once
class Bacteries{
public:
  string animals[8]={"squirrel","deer","marten","lizard","rabbit","wolf","fox","bear"};
  float size;
  string type;

  Bacteries(){
      size=0.4;
      type="heterotroph";
      cout<<"Bacteries have "<<size<<" nano meters "<<"Type: "<<type<<endl;
  }
  void Decompose(){
      int r=rand()%8;
      cout<<"Bacteries decompose "<<animals[r]<<endl;
  }
};