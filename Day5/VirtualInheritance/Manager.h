#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

class Manager : virtual public Employee
{
private:
    /* data */
    int _team_size;
public:
    Manager(std::string id,std::string name,int teamSize) 
    :Employee(id,name),_team_size(teamSize)
    {

    }
    void CalculateTax() override{
        std::cout<<"Manager pays 20% tax\n";
    }
    ~Manager() {}
};

#endif // MANAGER_H
