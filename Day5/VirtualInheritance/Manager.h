#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include <ostream>

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
    Manager(int teamSize) 
    :_team_size(teamSize){

    }
    void CalculateTax() override{
        std::cout<<"Manager pays 20% tax\n";
    }
    virtual~Manager() {
        std::cout<<"manager destroyed \n";
    }

    int teamSize() const { return _team_size; }

    friend std::ostream &operator<<(std::ostream &os, const Manager &rhs);
};

inline std::ostream &operator<<(std::ostream &os, const Manager &rhs) {
    os 
       << " _team_size: " << rhs._team_size;
    return os;
}

#endif // MANAGER_H
