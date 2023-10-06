#include <iostream>
#include "Employee.h"
#include "Functionalities.h"
#define SIZE 3

int main(){
    Employee* arr[SIZE] = {};

    try{
         CreateObjects(arr);
         std::cout<<AverageBudget(arr)<<std::endl;
         Employee* res = EmployeeWithHighestSalary(arr);
         std::cout<<"employee with highest salary :"<<*res<<"\n";
         int count = CountEmployeeWithGivenDepartment(arr,Department::DEVELOPMENT);
         DisplayEnum(Department::DEVELOPMENT);
         std::cout<<"count of employees with given department "<<count<<"\n";
    }catch(std::runtime_error& ex){
        std::cout<<ex.what();// whats the exception message 
    }

    FreeMemory(arr);

}