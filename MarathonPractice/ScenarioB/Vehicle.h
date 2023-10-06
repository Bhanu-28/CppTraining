#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include "VehicleType.h"

class Vehicle
{
private:
    /* data */
    std::string _id;
    std::string _brand;
    float _price;
    VehicleType _Vehicle_type;

public:
    Vehicle(const Vehicle&) = default;
    Vehicle(std::string id,std::string brand,float price,VehicleType vehicletype);
    Vehicle(std::string id,std::string brand,VehicleType vehicletype);
//abstract function //pure virtua;
    virtual float CalculateTax()=0;

    ~Vehicle() {
        std::cout<<"vehicle with id is :"<<_id<<"is destroyed";
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType vehicleType() const { return _Vehicle_type; }
};

#endif // VEHICLE_H
