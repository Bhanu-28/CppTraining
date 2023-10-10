#include <iostream>
#include "TouristVehicle.h"
#include "functionalities.h"
#include <iostream>
#define SIZE 3
//CLIENT CODE 
int main(){
    TouristVehicle* arr[SIZE];
    createObjects(arr);

    std::cout << "\n-----------\n";
    std::cout<<"vehicle with 4 seating "<<"\n "<<SatisfyTheTrip(arr)<<"\n BUS";
    std::cout << "\n---------------\n";

    std::cout << "Average budget: " << AveragePerHourBookingCharge(arr,TouristType::CAB);

    std::cout << "\n---------------\n";
    TouristVehicle* highest_per_booking_charge = PointerForPerHourBookingOfMax(arr);
    std::cout << "TouristVehicle with max charge: " << *highest_per_booking_charge ;
    std::cout << "\n----------------\n";

    // SatisfyTheTrip(arr);

    
    destroyObjectsOfArray(arr);
    
    
}   