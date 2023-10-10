#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "CustomerType.h"
#include <iostream>
#include "CreditCard.h"
class Customer
{
private:
    /* data */
    std::string _name;
    std::string _id;
    CustomerType _type;
    CreditCard* _card;
    

public:
    Customer(std::string name,std::string id,CustomerType type,CreditCard* creditcard);
    ~Customer() {
        "customer is destroyed \n";
    }

    std::string name() const { return _name; }

    std::string id() const { return _id; }

    CustomerType type() const { return _type; }

    CreditCard* card() const { return _card; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

   




    
};

std::string DisplayEnum(const CustomerType value);

#endif // CUSTOMER_H
