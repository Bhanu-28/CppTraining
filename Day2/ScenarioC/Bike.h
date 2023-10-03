#ifndef BIKE_H
#define BIKE_H
#include "Vehicle.h"
#include "BikeType.h"
#include <iostream>
class Bike :public Vehicle
{
private:
    float _bike_mileage;
    BikeType _bike_type;
    /* data */
public:

    //3+2
    Bike(std::string id,std::string brand,VehicleType type,float mileage,BikeType btype);
    //4+2
    Bike(std::string id,std::string brand,float price,VehicleType type,float mileage,BikeType btype);


    float CalculateTax() override;
    ~Bike() {
        std::cout
        <<"Bike part of vehicle with id "
        <<id()
        <<"is destroyed\n";
    }

    friend std::ostream &operator<<(std::ostream &os, const Bike &rhs);
    
};

std::string DisplayEnum(const  BikeType val);
    
#endif // BIKE_H

