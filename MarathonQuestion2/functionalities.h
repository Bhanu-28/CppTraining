#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3 

#include "TouristVehicle.h"

/* function to create 3 tourist vehicle instances and store them in primitive array*/

void createObjects(TouristVehicle* arr[SIZE]);

void destroyObjectsOfArray(TouristVehicle* arr[SIZE]);

/* a function to find and return all pointers to all instances of tourist vehicle in an array that satisfy  
conditions 
seat count of tourist vehicle is atleast 4 
permit instance permit type is lease 

*/

TouristVehicle** SatisfyTheTrip(TouristVehicle* arr[SIZE]);



float AveragePerHourBookingCharge(TouristVehicle* arr[SIZE],TouristType type);

TouristVehicle* PointerForPerHourBookingOfMax(TouristVehicle* arr[SIZE]);






#endif // FUNCTIONALTIES_H


