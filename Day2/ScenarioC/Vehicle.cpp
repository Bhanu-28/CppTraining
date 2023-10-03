#include "Vehicle.h"

//constructor mapping implementation 
Vehicle::Vehicle(std::string id, std::string brand, float price, VehicleType type)
:_id(id),_brand(brand),_type(type),_price(price)
{
}

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type)
:_id(id),_brand(brand),_type(type)
{
}

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _price: " << rhs._price
       << " _type: " <<DisplayEnum( rhs._type);
    return os;
}


std::string DisplayEnum(const VehicleType val){
    if(val==VehicleType::BIKE){
        return "BIKE";
    }
    else if(val==VehicleType::CAR){
        return "CAR";

    }
    else {
        return "OTHER";
    }
}