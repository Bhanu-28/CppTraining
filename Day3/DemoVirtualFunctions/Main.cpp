#include <iostream>
#include "Manager.h"


int main(){
    Employee* arr[2];

    arr[0] = new Employee();
    arr[1] = new Manager();
    //  employee version of function callled apply for leaves is non virtual 
    arr[0]->applyForLeaves();

    arr[1]->applyForLeaves();
    //version specific to the type of objcetcallled becauese paytax is virtual 
   //virtual can only be used in base class 
    arr[0]->payTax();
    arr[1]->payTax();  
    //employee version of function called beacuse there is no display in child class manager

    arr[0]->Display();
    arr[0]->Display();
    delete arr[0];
    delete arr[1];
}

//for non virtual functions 
//it will check the pointer and it will print the output for 
//employee 