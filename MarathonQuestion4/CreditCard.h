#ifndef CREDITCARD_H
#define CREDITCARD_H
#include <iostream>
#include "CreditCardType.h"
class CreditCard
{
private:
    /* data */
    std::string _number;
    CrediCardType _crType;
    float _limit;
    int _cvv_number;

public:
    CreditCard(std::string number,CrediCardType crtype,float limit,int cvvNumber) ;
    ~CreditCard() {
        std::cout<<"credit card is destroyed of type \n " <<_number<<"is destroyed";
       
    }

    std::string number() const { return _number; }

    CrediCardType crType() const { return _crType; }

    float limit() const { return _limit; }

    int cvvNumber() const { return _cvv_number; }

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);

    
    
};
std::string DisplayEnum(const CrediCardType value);

#endif // CREDITCARD_H
