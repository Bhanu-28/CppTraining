#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
class Employee
{
private:
    /* data */
public:
    Employee() =default;
    void applyForLeaves(){
        std::cout<<"employee applies for leave on portal \n";

    }
    virtual void payTax(){
        std::cout<<"employee pays 20% of  salary as";
        
    }
    virtual void Display(){
        std::cout<<"employee diplay";
    }
    virtual ~Employee() {
        std::cout<<"employee destroyed";
    }
};

#endif // EMPLOYEE_H
