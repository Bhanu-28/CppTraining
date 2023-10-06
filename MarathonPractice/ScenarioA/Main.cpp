#include "Vehicle.h"
#include <iostream>
#include "Functionalities.h"

int main(){
    Vehicle* arr[3];
    CreateObjects(arr);
    std::cout<<AveragePriceOfVehicle(arr)<<std::endl;
    
}