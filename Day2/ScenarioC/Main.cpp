#include "Car.h"
#include "Functionalities.h"
#include <iostream>

int main(){
    Vehicle* garage[3]; //3 locations reserved ; each location can store 8 bytes (address) 24 bytes of memory when u start create objects adress will change 
    CreateObjects(garage);
    std::cout<<"average price"<<AveragePrice(garage)<<::std::endl;
    CallCalculateTax(garage);
    FreeMemory(garage);

    //valid grint ->checks heap memory if there is any leakage 
}