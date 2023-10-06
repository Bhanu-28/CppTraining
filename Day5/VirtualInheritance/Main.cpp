#include <iostream>
#include "Director.h"
#include "Employee.h"

int main(){
    Employee* d1 = new Director(
        "D191",
        "Bhanu",
        17,
        "pune",
        987.67f
    );
    std::cout<<"director object \n";
    delete d1;
}