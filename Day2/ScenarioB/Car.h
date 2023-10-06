#ifndef CAR_H

#define CAR_H
#include "Vehicle.h"
#include "CarType.h"
class Car : public Vehicle 
{
private:
    /* data */
    CarType _car_type;
public:
//4+1 parameter 
    Car(std::string id,std::string brand,float price,VehicleType type,CarType cType);
//3+1 parameter 
    Car(std::string id,std::string brand,VehicleType type,CarType cType);

    float CalculateTax() override;

    
    
    ~Car() {
        //calling getter since private property of parent cant be accesses in child 
        std::cout<<"car part of vehicle with id :"
        <<id()
        <<"is destroyed\n";
    }
    CarType carType() const{return _car_type;}
};

#endif // CAR_H
