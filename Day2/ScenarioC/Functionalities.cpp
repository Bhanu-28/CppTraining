#include "Functionalities.h"
#include "Car.h"
#include "Bike.h"
#include "Vehicle.h"

void CreateObjects(Vehicle *garage[3])
{
    garage[0] = new Car("v101","honda",78.02f,VehicleType::CAR,CarType::SEDAN);
    garage[1] = new Bike("v201","Bmw",76.02f,VehicleType::BIKE,  9.0f ,BikeType::ATV);
    garage[2] = new Car("v301","creta",75.02f,VehicleType::CAR,CarType::HATCHBACK);

//FOR DISPLAYING THE ENUM 
    for(int i=0;i<3;i++){
        std::cout<<*(garage[i])<<"\n";
    }
}

float AveragePrice(Vehicle *garage[3])
{
    float total = 0.0f;
    for(int i=0;i<3;i++){
        total+=(garage[i])->price();
    }
    return total/3;
}

void CallCalculateTax(Vehicle *garage[3])
{
    for(int i=0;i<3;i++){
        std::cout<<(garage[i])->CalculateTax()<<'\n';
    }
}
void FreeMemory(Vehicle *garage[3]){
        for(int i=0;i<3;i++){
            std::cout<<"deleting "<<garage[i];
       delete garage[i];
       std::cout<<"\n";
    }
}
