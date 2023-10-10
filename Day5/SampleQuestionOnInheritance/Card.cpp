#include "Card.h"
std::ostream &operator<<(std::ostream &os, const Card &rhs) {
    os << "_number: " << rhs._number
       << " _cvv_number: " << rhs._cvv_number
       << " _issuer: " <<DisplayEnum(rhs._issuer)
       << " _annual_charge: " << rhs._annual_charge
       << " _limit: " << rhs._limit;
    return os;
}
std::string DisplayEnum(const Issuer value)
{
    if(value == Issuer::MASTERCARD){
        return "PREMIUM";
    }
    else if(value ==Issuer::RUPAY){
        return "RUPAY";
    }
    else{
        return "VISA";
    }
}
Card::Card(int number, int cvvNumber, Issuer issuer, float annualCharges, int limit)
    : _number(number), _issuer(issuer), _annual_charge(annualCharges)
{
}
