#include "Customer.h"

std::string DisplayEnum(const CustomerType value)
{
    if(value==CustomerType::ELITE){
        return "ELITE";
    }
    else if(value == CustomerType::PRIVILIGED){
        return "privileged";
    }
    else{
        return "PRO";
    }
}

Customer::Customer(std::string name, std::string id, CustomerType type, CreditCard *creditcard)
:_name(name), _id(id), _type(type), _card(creditcard)
{
}

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_name: " << rhs._name
       << " _id: " << rhs._id
       << " _type: " <<DisplayEnum(rhs._type)
       << " _card: " << rhs._card;
    return os;
}
