#include <iostream>
#include "Vehicle.h"
#include "VehicleType.h"


void Demo(){
    Vehicle v1("v908","Benz",78.89f,VehicleType::CAR);
    Vehicle v2("v908","Benz",78.89f,VehicleType::CAR);

    Vehicle* v3 = new  Vehicle("v908","Benz",78.89f,VehicleType::CAR);
    Vehicle* v4= new  Vehicle("v908","Benz",78.89f,VehicleType::CAR);

    float ans = v1+v2;
    std::cout<<v1+v2<<std::endl;

    std::cout<<(*v3) + (*v4)<<"\n";
}

int main(){
  Demo();

}