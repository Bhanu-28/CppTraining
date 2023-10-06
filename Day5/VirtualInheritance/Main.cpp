#include <iostream>
#include "Director.h"
#include "Employee.h"

int main(){
    Director* d1 = new Director(
        "D191",
        "Bhanu",
        17,
        "pune",
        987.67f
    );
    std::cout<<"director object \n";
    d1->CalculateTax();
    std::cout<<"Id from Employee:"<<d1->id() <<"\n";
    std::cout<<"name for employee :"<<d1->name() <<"\n";
    std::cout<<"team size from Manager :"<<d1->teamSize() <<"\n";
    std::cout<<"location from executive  :"<<d1->location()<<"\n";
    std::cout<<"budget   from director section  :"<<d1->budget()<<"\n";
    std::cout<<"calling caluculate tax inherited from manager class"<<"\n";
    d1->Manager::CalculateTax();
    std::cout<<"\n";
    std::cout<<"calling caluculate tax inherited from executive class"<<"\n";
    d1->Executive::CalculateTax();
    std::cout<<"\n";
    std::cout<<"directors implememtation of calculateTax "<<"\n";
    d1->CalculateTax();
    std::cout<<"\n";
    std::cout<<"director object \n";
    std::cout<<*d1<<std::endl;

    delete d1;
}