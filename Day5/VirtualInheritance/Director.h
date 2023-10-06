#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "Manager.h"
#include "Executive.h"
#include "Employee.h"

/* 
in multiple inheritance in cpp the most derived class is reponsible for 
instantiating the most base class/classes
*/

class Director :public Manager,public Executive 
{
private:
    /* data */
    float _budget;

public:
   Director(
        std::string id ,std::string name,
        int teamSize,std::string location,float budget)
   
  :Employee(id,name),Manager(id,name,teamSize),Executive(id,name,location) ,_budget(budget){
//most derived class can use base class
   }

   void CalculateTax(){
    std::cout<<"director pays 1% tax as he skips the tax and save money ";
   }
    ~Director() {}
};

#endif // DIRECTOR_H
