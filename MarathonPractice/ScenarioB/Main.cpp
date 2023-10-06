#include <iostream>
#include "Car.h"
#include "Functionalities.h"
int main(){
    Car* arr[3];
    CreateObjects(arr);
    std::cout<<"Average price :"<<AverageTax(arr)<<std::endl;
    FunCalculateTax(arr);
    FreeMemory(arr);
}