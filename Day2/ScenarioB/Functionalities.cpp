#include "Functionalities.h"

void CreateObjects(Car *arr[3])
{
    arr[0] = new Car("v101","honda",78.02f,VehicleType::CAR,CarType::SEDAN);
    arr[1] = new Car("v201","benx",76.02f,VehicleType::CAR,CarType::SUV);
    arr[2] = new Car("v301","creta",75.02f,VehicleType::CAR,CarType::HATCHBACK);
}

float AveragePrice(Car *arr[3])
{
    float total = 0.0f;
    for(int i=0;i<3;i++){
        total+=(arr[i])->price();
    }
    return total/3;
}

void CallCalculateTax(Car *arr[3])
{
    for(int i=0;i<3;i++){
        std::cout<<(arr[i])->CalculateTax()<<'\n';
    }
}
void FreeMemory(Car *arr[3]){
        for(int i=0;i<3;i++){
       delete arr[i];
    }
}
