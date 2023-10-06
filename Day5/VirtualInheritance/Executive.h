#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Employee.h"

class Executive :virtual public Employee
{
private:
    /* data */
    std::string _location;
public:
    Executive(std::string id,std::string name,std::string location) 
    :Employee(id,name),_location(location){}

    void CalculateTax() override{
        std::cout<<"executive pays 40% tax ";
    }
    ~Executive() {
        std::cout<<"executive is destroyed of location "<<_location<<std::endl;
    }
};

#endif // EXECUTIVE_H
