#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include "Employee.h"
class Manager :public Employee
{
private:
    /* data */
public:
    Manager() =default;
        void applyForLeaves(){
        std::cout<<"Manager takes for leave when they  \n";

    }
     void payTax(){
        std::cout<<"Manager pays 15% of  salary as";
        
    }

    ~Manager() {
        std::cout<<"manager destroyed ";
    }
};

#endif // MANAGER_H
