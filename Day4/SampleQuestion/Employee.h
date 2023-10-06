#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Department.h"
#include "Project.h"
#include <iostream>
class Employee
{
private:
   std::string _id;
   std::string _name;
   float _salary;
   Department _dept;
   //at beginnig not a known type as class i snot created 
   Project* _project ;
public:
    Employee() = delete; //cant use stack allocated objects in array 
    Employee(const Employee&) = delete;
    Employee(
        std::string id,
        std::string name,
        float salary,
        Department dept,
        Project* ptr
    );
    ~Employee() {
        std::cout<<"object with id  :"
        <<_id
        <<"is destroyed\n";
    }

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    Department dept() const { return _dept; }

    Project* project() const { return _project; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);

    
};
std::string DisplayEnum(const Department value);

#endif // EMPLOYEE_H

