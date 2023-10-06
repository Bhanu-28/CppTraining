#include "Functionalities.h"
#define SIZE 3

void CreateObjects(Car *arr[SIZE])
{
    arr[0] = new Car("135","jeep",700000.89f,VehicleType::CAR,CarType::PETROL);
    arr[1] = new Car("789","Duke",200000.490f,VehicleType::BIKE,CarType::ELECTRIC);
    arr[2] = new Car("135","swift dezire",400000.765f,VehicleType::CAR,CarType::CNG);
}

float AverageTax(Car *arr[SIZE])
{
    float total = 0.0f;
    for(int i=0;i<SIZE;i++){
        total+=arr[i]->price();
    }
    return total/SIZE;
}

void FunCalculateTax(Car *arr[SIZE])
{
for(int i=0;i<SIZE;i++){
    std::cout<<arr[i]->CalculateTax()<<std::endl;
}
}

void FreeMemory(Car *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}
