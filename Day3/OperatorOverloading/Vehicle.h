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
    VehicleType _type;
public:
    //deleted default constructor or disabled default constructor 
    //best practice as delete or default 
    Vehicle() =delete;

    Vehicle(const Vehicle&)= default;//defaulted copy constructor 
    
    ~Vehicle() {
        std::cout
        <<"vehicle with id :"
        <<_id
        <<"is destroyed\n";
    }
    
    Vehicle(
    std::string id,
    std::string brand,
    float price,
    VehicleType type
    );
    float CalculateTax();
    float CalculateTax(float tax_percent);
    float CalculateTax(float sgst,float cgst);

    std::string id() const { return _id; }

//function()
// e1 + e2 
    float operator+ (Vehicle e2){
        //current object's price plus passed object's price 
        return this->price()+e2.price();
    }
    //overloading 
        float operator+ (Vehicle* e2){
        //current object's price plus passed object's price 
        return this->price()+ e2->price();
    }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

    //    friend std::ostream& operator <<(std ::ostream& os,const Vehicle& obj){
    //         os <<"Id:"<<obj._id<<"\t"<<"Brand :"<<obj._brand
    //         <<"\t"<<"Price: "<<obj._price<<"\t"<<"Type :"
    //         <<DisplayEnum(obj._type);
    //         return os;
    //     }



};
std::string DisplayEnum(const VehicleType value);

#endif // VEHICLE_H

// v1 + *v2;
