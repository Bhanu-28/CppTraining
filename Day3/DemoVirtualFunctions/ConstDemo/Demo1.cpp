#include "C:\Users\gorrek\Desktop\CPPTRAINING\Day3\ScenarioD\Vehicle.h"

#include <iostream>

/*
use case 1 with variables of primitive types which are not pointers 


*/

void Demo(){
    //n1 is a constant integer 
    const int n1 =10;
    //grade is a constant character 
    const char grade = 'A';
    //allowed 
    std::cout<<n1<<"\t" <<grade <<"\n";
    //not allowed
    //n1 = 20; //since n1 is immutable(constant ), it cannnot be changed once initialized
    //grade = 'B'     //since n1 is immutable(constant ), it cannnot be changed once initialized

        
}

int main(){
        Demo();
}