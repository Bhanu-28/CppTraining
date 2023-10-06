#include "Vehicle.h"

Vehicle::Vehicle(std::string id, std::string brand, float price, VehicleType vehicletype)
:_id(id),_brand(brand),_price(price),_Vehicle_type(vehicletype){
}

Vehicle::Vehicle(std::string id, std::string brand, VehicleType vehicletype)
:_id(id),_brand(brand),_Vehicle_type(vehicletype){
}
