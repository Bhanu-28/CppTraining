#include "functionalities.h"
#include "TouristVehicle.h"
#define SIZE 3

void createObjects(TouristVehicle* arr[SIZE])
{
     arr[0] = new TouristVehicle("AP 07 AY 3046",TouristType::BIKE,2,30,PermitType::LEASE);
     arr[1] = new TouristVehicle("AP 07 CZ 7831",TouristType::CAB,4,90,PermitType::NODUES);
     arr[2] = new TouristVehicle("AP 07 AY 6664",TouristType::BUS,50,660,PermitType::LEASE);
}

void destroyObjectsOfArray(TouristVehicle *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}

TouristVehicle **SatisfyTheTrip(TouristVehicle* arr[SIZE])
{
    TouristVehicle ** result = new TouristVehicle *[SIZE];
   for(int i=0;i<SIZE;i++){
    if(arr[i]->seatCount()==4 && arr[i]->permit()==PermitType::LEASE ){
            result[i] = arr[i];
    }
   }
   return result;
}

float AveragePerHourBookingCharge(TouristVehicle *arr[SIZE],TouristType type)
{
    
    float total = 0.0f;
    for(int i=0; i < SIZE; i++) {
        if (arr[i]->type() == type) {
            total+=arr[i]->perHourBookingCharge();
        }
    }
    return total/SIZE;

}

TouristVehicle *PointerForPerHourBookingOfMax(TouristVehicle *arr[SIZE])
{
        TouristVehicle* result = nullptr;
    //assume first TouristVehicle salary as highest 
    float max = arr[0]->perHourBookingCharge(); 
    //take 1 variable for recording current position objects perHourBookingCharge in loop 
    float currentPerHourCharge = 0.0f;
    for(int i=0;i<3;i++){
        //fetch current position TouristVehicles perHourBookingCharge 
        currentPerHourCharge=arr[i]->perHourBookingCharge();
        //if current sal is more than max,update max and result pointers
        if(currentPerHourCharge > max){
            max=currentPerHourCharge;
            result = arr[i]; 
        }
    } 
    //return result AFTER THE WHOLE LOOP ONLY 
    return result;
}
