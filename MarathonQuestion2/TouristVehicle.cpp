#include "TouristVehicle.h"

TouristVehicle::TouristVehicle(std::string number, TouristType type, int seatCount, float perHourBookingCharge,PermitType permit)
:_number(number),_type(type),_seat_count(seatCount),_per_hour_booking_charge(perHourBookingCharge),_permit(permit){
}
std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _type: " <<DisplayEnum(rhs._type)
       << " _seat_count: " << rhs._seat_count
       << " _per_hour_booking_charge: " << rhs._per_hour_booking_charge
       << " _permit_type: " << DisplayEnum(rhs._permit);

    return os;
}
std::string DisplayEnum(const PermitType value)
{
    if(value == PermitType::LEASE){
        return "LEASE";
    }

    else{
        return "DUES";
    }
}
std::string DisplayEnum(const TouristType value)
{
    if(value == TouristType::BIKE){
        return "BIKE";
    }
    else if (value==TouristType::CAB){
        return "CAB";
        
    }
    else{
        return "CAB";
    }
}
