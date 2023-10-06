#ifndef CARD_H
#define CARD_H
#include "Issuer.h"
#include<iostream>
class Card
{
private:
    /* data */
    int _number;
    int _cvv_number;
    Issuer _issuer;
    float _annual_charge;
    int _limit;
    virtual float CalculateTax();
    
public:
    Card(int number,int cvvNumber,Issuer issuer,float annualCharges,int limit) ;
    ~Card() {
        std::cout<<"card with number :"<<_number<<"is destroyed \n";
    }

    int number() const { return _number; }

    int cvvNumber() const { return _cvv_number; }

    Issuer getIssuer() const { return _issuer; }

    float annualCharge() const { return _annual_charge; }

    int limit() const { return _limit; }

    friend std::ostream &operator<<(std::ostream &os, const Card &rhs);
    
};
std::string DisplayEnum(const Issuer value);
#endif // CARD_H
