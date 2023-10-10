#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H
#include <iostream>
#include "TouristType.h"
#include "PermitType.h"

class TouristVehicle
{
private:
    /* data */
    std::string _number;
    TouristType _type ;
    int _seat_count;
    float _per_hour_booking_charge;
    PermitType _permit;
    


public:
    TouristVehicle() =delete;
    TouristVehicle(const TouristVehicle&) = delete;
    TouristVehicle(std::string number,TouristType type,int seatCount,float perHourBookingCharge,PermitType permit);

    
    ~TouristVehicle() {
       std::cout<< "vehicle with number :"
        <<_number
        <<"is destroyed \n";
    }

    std::string number() const { return _number; }

    TouristType type() const { return _type; }

    float perHourBookingCharge() const { return _per_hour_booking_charge; }

    int seatCount() const { return _seat_count; }

    PermitType permit() const { return _permit; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);
    
};
std::string DisplayEnum(const TouristType value);
std::string DisplayEnum(const PermitType value);



#endif // TOURISTVEHICLE_H
