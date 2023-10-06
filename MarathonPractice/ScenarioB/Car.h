#ifndef CAR_H
#define CAR_H
#include "CarType.h"
#include "Vehicle.h"
class Car : public Vehicle
{
private:
    /* data */
    CarType _car_type;
    
public:
    Car(std::string id, std::string brand, float price, VehicleType vehicletype,CarType cartype);
    Car(std::string id, std::string brand, VehicleType vehicletype,CarType cartype) ;
    ~Car() {
    std::cout<<"car is destroyed "<<std::endl;
    }


    float CalculateTax() override;
};




#endif // CAR_H


