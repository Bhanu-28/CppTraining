#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

class Manager : virtual public Employee
{
private:
    /* data */
    int _team_size;
public:
    Manager(int teamSize) 
    :_team_size(teamSize){
        
    }
    ~Manager() {}
};

#endif // MANAGER_H
