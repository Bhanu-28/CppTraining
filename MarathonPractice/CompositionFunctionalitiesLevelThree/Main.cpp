#include "Functionalities.h"
#include "Employee.h"
#include "Project.h"
#include <iostream>
#define SIZE 3


int main(){
    Employee* arr[SIZE]= {};
    try{

    CreateObjects(arr);
    std::cout<<"average budget :"<<AverageBudgetOfAllProjects(arr)<<"\n";
    Employee* res = EmployeeWithHighestSalary(arr);
    std::cout<<"employee with highest salary :"<<*res<<"\n";
    int count = CountOfEmployeesOfGivenDepartment(arr,Department::TESTING);
    std::cout << "Count of Employees with given Department: " << count << "\n";


    }catch(std::runtime_error& ex){
        std::cout<<ex.what();
    }
    
    FreeMemoryOnHeap(arr);
}