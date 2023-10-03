#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "Type.h"
class Vehicle
{
private:
    /* data */
    std::string _id;
    std::string _brand;
    Type _type;
    float _price;
    
public:
    Vehicle(/* args */
        std::string id,
        std::string brand,
        Type type,
        float price
        );
    Vehicle(/* args */
        std::string id,
        std::string brand,
        Type type
        );
       
       //vehicle(vehicle obj )
       //defaulted copy constructor 
       //i will not write the body of copy constructor 
       //compiler should generate a default version of it during compilation 
       Vehicle(const Vehicle&)= default; //shallow copy 

    //    //full version of code 
    //    Vehicle(const Vehicle& obj){
    //     this->_brand=obj._brand;
    //     this->_id=obj._id;
    //     this->_price=obj._price;
    //     this->_type=obj._type;
    //    }

    ~Vehicle() {
        std::cout   
            <<"vehicle with id "
            <<_id
            <<"is destroyed\n";
    }
};

#endif // VEHICLE_H
