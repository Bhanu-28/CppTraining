#include <iostream>
#include "Vehicle.h"
#include "Functionalities.h"
int main(){

Vehicle* arr[3];
CreateObjects(arr);
std::cout<<AveragePrice(arr)<<std::endl;
MinPriceCarDetails(arr);

// std::unique_ptr<Vehicle>uptr;

    
}









//function to find 3 objects on the heap 

//a function to find the average price of all objects 

//a function to find car with minimum price and print all it details 

//demonstrate all functionalities in main.cpp 


