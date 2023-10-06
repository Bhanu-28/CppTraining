#include "Car.h"

Car::Car(std::string id, std::string brand, float price, VehicleType vehicletype, CarType cartype)
:Vehicle(id,brand,price,vehicletype),_car_type(cartype){
}

Car::Car(std::string id, std::string brand, VehicleType vehicletype,CarType cartype)
:Vehicle(id,brand,vehicletype),_car_type(cartype){
}

float Car::CalculateTax()
{
    return 0.1f*price();
}
