#pragma once
#include <string>
#include <iostream>
using namespace std;
class Animals{
public:
    string color[6]={"brown","black","grey","white","orange","green"};
    int age;
    string sex[2]={"male","female"};
    string ndeath[3]={"illness","old age","hunger"};
    virtual void Reproduce(int nr) = 0;
    virtual void Die(int nr) = 0;
};
class Herbivorous:public Animals{
public:
    virtual void Eat() = 0;
    virtual void Run() = 0;
};
class Carnivore:public Animals{
public:
    virtual void Hunt() = 0;
    virtual void Protect() = 0;
};