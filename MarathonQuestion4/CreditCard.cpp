#include "CreditCard.h"

CreditCard::CreditCard(std::string number, CrediCardType crtype, float limit, int cvvNumber)
:_number(number),_crType(crtype),_limit(limit){
    if(cvvNumber >= 100 && cvvNumber<999){
        _cvv_number= cvvNumber;
    }
        else {
        std::runtime_error("Invalid cvv for Card");
    }

}

std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << "_number: " << rhs._number
       << " _crType: " << DisplayEnum(rhs._crType)
       << " _limit: " << rhs._limit
       << " _cvv_number: " << rhs._cvv_number;
    return os;
}

std::string DisplayEnum(const CrediCardType value)
{
    if(value==CrediCardType::SIGNATURE){
        return "SIGNATURE";
    }
    else if (value == CrediCardType::MILES){
        return "MILES";
    }
    else{
        return "NEO";
    }
}


