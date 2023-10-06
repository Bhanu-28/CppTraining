#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "Manager.h"
#include "Executive.h"
#include "Employee.h"
#include <ostream>

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
    ~Director() {
        std::cout<<"director destroyed \n";
    }

    float budget() const { return _budget; }

    friend std::ostream &operator<<(std::ostream &os, const Director &rhs);
};

inline std::ostream &operator<<(std::ostream &os, const Director &rhs) {
    os << static_cast<const Manager &>(rhs)
       << static_cast<const Executive &>(rhs)
       << " _budget: " << rhs._budget;
    return os;
}

#endif // DIRECTOR_H
