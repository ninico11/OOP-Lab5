#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include "Bear.h"
#include "Bacteries.h"
#include "Butterfly.h"
#include "Deer.h"
#include "Fox.h"
#include "Lizard.h"
#include "Marten.h"
#include "Rabbit.h"
#include "Squirrel.h"
#include "Wolf.h"
#include "Grandparent and parents.h"

using namespace std;

int main(){
srand(time(0));
Bacteries bact;
Squirrel squir;
Deer deer;
Marten mar;
Lizard  liza;
Butterfly bfly;
Rabbit rabb;
Wolf auf;
Fox fire;
Bear griz;
int numberh = 50;
int numberc = 50;
cout<<"\n Play!\n";
while(1){
    int territory = 1000, moves = 0; 
    float food = territory * 10;
    float fnr = 0;
    int territoryh = 500; 
    int poth = 500;
    int territoryc = 500; 
    int potc = 500;
    int nr=rand()%6+1;
    moves++;
    if(moves % 100 == 0){
        food += food * 0.15;
    }
    else{
        food = food;
    }
    if(nr==1){
        nr=rand()%8+1;
        if(nr==1){
            nr = rand()%4+1;
            squir.Reproduce(nr);
            if((territoryh + territoryc) >= territory){
                territoryh += 1*nr;
                poth += 1*nr;
                numberh+=nr;
            }
            else{
                numberh+=nr;
                poth += 1*nr;
            }
        }
        else if(nr==2){
            nr = rand()%4+1;
            deer.Reproduce(nr);
            if((territoryh + territoryc) >= territory){
                territoryh += 5*nr;
                poth += 5*nr;
                numberh+=nr;
            }
            else{
                numberh+=nr;
                poth += 5*nr;
            }
        }
        else if(nr==3){
            nr = rand()%4+1;
            mar.Reproduce(nr);
            if((territoryh + territoryc) >= territory){
                territoryc += 3*nr;
                potc += 3*nr;
                numberc+=nr;
            }
            else{
                numberc+=nr;
                potc += 3*nr;
            }
        }
        else if(nr==4){
            nr = rand()%4+1;
            liza.Reproduce(nr);
            if((territoryh + territoryc) >= territory){
                territoryc += 1*nr;
                potc += 1*nr;
                numberc+=nr;
            }
            else{
                numberc+=nr;
                potc += 1*nr;
            }
        }
        else if(nr==5){
            nr = rand()%4+1;
            rabb.Reproduce(nr);
            if((territoryh + territoryc) >= territory){
                territoryh += 3*nr;
                poth += 3*nr;
                numberh+=nr;
            }
            else{
                numberh+=nr;
                poth += 3*nr;
            }
        }
        else if(nr==6){
            nr = rand()%4+1;
            auf.Reproduce(nr);
            if((territoryh + territoryc) >= territory){
                territoryc += 5*nr;
                potc += 5*nr;
                numberc+=nr;
            }
            else{
                numberc+=nr;
                potc += 5*nr;
            }
        }
        else if(nr==7){
            nr = rand()%4+1;
            fire.Reproduce(nr);
            if((territoryh + territoryc) >= territory){
                territoryc += 3*nr;
                potc += 3*nr;
                numberc+=nr;
            }
            else{
                numberc+=nr;
                potc += 3*nr;
            }
        }
        else{
            nr = rand()%4+1;
            griz.Reproduce(nr);
            if((territoryh + territoryc) >= territory){
                territoryc += 8*nr;
                potc += 8*nr;
                numberc+=nr;
            }
            else{
                numberc+=nr;
                potc += 8*nr;
            }
        }
    }
    else if(nr==2){
        nr=rand()%8+1;
        int dnr = 0;
        if(nr==1){
            if((territoryh * 2) >= food){
                dnr = rand()%3;
            }
            else{
                dnr = rand()%2;
            }
            squir.Die(dnr);
            if((territoryc + territoryh) >= territory){
                numberh--;
                territoryh -= 1;
                poth -= 1;
            }
            else {
                numberh--;
                poth -= 1;
            }
        }
        else if(nr==2){
            if((territoryh * 2) >= food){
                dnr = rand()%3;
            }
            else{
                dnr = rand()%2;
            }
            deer.Die(dnr);
            if((territoryc + territoryh) >= territory){
                numberh--;
                territoryh -= 5;
                poth -= 5;
            }
            else {
                numberh--;
                poth -= 5;
            }
        }
        else if(nr==3){
            if(numberc > numberh){
                dnr = rand()%3;
            }
            else{
                dnr = rand()%2;
            }            
            mar.Die(dnr);
            if((territoryc + territoryh) >= territory){
                numberc--;
                territoryc -= 3;
                potc -= 3;
            }
            else {
                numberc--;
                potc -= 3;
            }
        }
        else if(nr==4){
            dnr = rand()%2;
            liza.Die(dnr);
            if((territoryc + territoryh) >= territory){
                numberc--;
                territoryc -= 1;
                potc -= 1;
            }
            else {
                numberc--;
                potc -= 1;
            }
        }
        else if(nr==5){
            if((territoryh * 2) >= food){
                dnr = rand()%3;
            }
            else{
                dnr = rand()%2;
            }
            rabb.Die(dnr);
            if((territoryc + territoryh) >= territory){
                numberh--;
                territoryh -= 3;
                poth -= 3;
            }
            else {
                numberh--;
                poth -= 3;
            }
        }
        else if(nr==6){
            if(numberc > numberh){
                dnr = rand()%3;
            }
            else{
                dnr = rand()%2;
            }                    
            auf.Die(dnr);
            if((territoryc + territoryh) >= territory){
                numberc--;
                territoryc -= 5;
                potc -= 5;
            }
            else {
                numberc--;
                potc -= 5;
            }
        }
        else if(nr==7){
            if(numberc > numberh){
                dnr = rand()%3;
            }
            else{
                dnr = rand()%2;
            }                    
            fire.Die(dnr);
            if((territoryc + territoryh) >= territory){
                numberc--;
                territoryc -= 3;
                potc -= 3;
            }
            else {
                numberc--;
                potc -= 3;
            }
        }
        else{
            if(numberc > numberh){
                dnr = rand()%3;
            }
            else{
                dnr = rand()%2;
            }                    
            griz.Die(dnr);
            if((territoryc + territoryh) >= territory){
                numberc--;
                territoryc -= 8;
                potc -= 8;
            }
            else {
                numberc--;
                potc -= 8;
            }
        }
    }
    else if(nr==3){
        nr=rand()%6+1;
        if(nr==1){
            squir.Eat();
            fnr = (rand() / (float)RAND_MAX * 1)+0.25;
            if((territoryh + territoryc) >= territory){
                food += fnr;
            }
            else{
                food += fnr + fnr * (numberh  * 100);
            }

        }
        else if(nr==2){
            deer.Eat();
            fnr = (rand() / (float)RAND_MAX * 10)+5;
            if((territoryh + territoryc) >= territory){
                food += fnr;
            }
            else{
                food += fnr + fnr * (numberh  * 100);
            }
        }
        else if(nr==3){
            bfly.Pollinate();
        }
        else if(nr==4){
            griz.Eat();  
        }
        else if(nr==5){
            rabb.Eat();
            fnr = (rand() / (float)RAND_MAX * 5)+2;
            if((territoryh + territoryc) >= territory){
                food += fnr;
            }
            else{
                food += fnr + fnr * (numberh  * 100);
            }
        }
        else{
            rabb.Home();
        }
    }
    else if(nr==4){
        nr=rand()%5+1;
        if(nr==1){
            mar.Hunt();
            sleep(1);
            squir.Run();
            sleep(1);
            mar.age=rand()%10+1;
            squir.age=rand()%10+1;
            if((mar.age>=squir.age and mar.age>=8) or (mar.age<=squir.age and mar.age<=3)){
                cout<<"The squirrel escaped\n";
            }
            else if((mar.age>=squir.age and mar.age<8) or (mar.age<=squir.age and mar.age>3)) {
                cout<<"The marten caught the squirrel\n";
                numberh--;

            }
            else{
                cout<<mar.age<<" "<<squir.age;
            }
        }
        else if(nr==2){
            liza.Hunt();
        }
        else if(nr==3){
            auf.Hunt();
            sleep(1);
            deer.Run();
            sleep(2);
            auf.age=rand()%10+1;
            deer.age=rand()%10+1;
            if((auf.age>=deer.age and auf.age>=8) or (auf.age<=deer.age and auf.age<=3)){
                cout<<"The deer escaped\n";
            }
            else if((auf.age>=deer.age and auf.age<8) or (auf.age<=deer.age and auf.age>3)) {
                cout<<"The wolf caught the deer\n";
                numberh--;

            }
        }
        else if(nr==4){
            fire.Hunt();
            sleep(1);
            rabb.Run();
            sleep(1);
            fire.age=rand()%10+1;
            rabb.age=rand()%10+1;
            if((fire.age>=rabb.age and fire.age>=8) or (fire.age<=rabb.age and fire.age<=3)){
                cout<<"The rabbit escaped\n";
            }
            else if((fire.age>=rabb.age and fire.age<8) or (fire.age<=rabb.age and fire.age>3)) {
                cout<<"The fox caught the rabbit\n";
                numberh--;

            }
        }
        else{
            griz.Hunt();
            sleep(1);
            deer.Run();
            sleep(1);
            nr=rand()%2+1;
            griz.age=rand()%10+1;
            deer.age=rand()%10+1;
            if((griz.age>=deer.age and griz.age>=8) or (griz.age<=deer.age and griz.age<=3)){
                cout<<"The deer escaped\n";
            }
            else if((griz.age>=deer.age and griz.age<8) or (griz.age<=deer.age and griz.age>3)) {
                cout<<"The bear caught the deer\n";
                numberh--;

            }
            else{
                cout<<griz.age<<" "<<deer.age;
            }
        }
    }
    else if(nr==5){
        nr=rand()%5+1;
        if(nr==1){
            mar.Protect();
        }
        else if(nr==2){
            auf.Protect();
        }
        else if(nr==3){
            fire.Protect();
        }
        else if(nr==4){
            griz.Protect();
        }
        else{
            liza.Protect();
        }
    }
    else{
        bact.Decompose();
    }
    sleep(1);
    if(numberh==0 or numberc == 0 or food == 0 ){
        if(numberh == 0){
            cout<<"The habitat was destroyed because all herbivores died\n";
            cout<<"The habitat existed "<< moves << endl;
        }
        else if(numberc == 0){
            cout<<"The habitat was destroyed because all carnivores died\n";
            cout<<"The habitat existed "<< moves << endl;
        }
        else{
            cout<<"The food ran out and all the animals died of hunger\n";
            cout<<"The habitat existed "<< moves << endl;
        }
        break;
    }
}
return 0;
}

