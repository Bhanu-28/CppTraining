#include "Functionalities.h"
#include "Employee.h"
#include <iostream>
#define SIZE 3


int main() {
    Employee* arr[SIZE] = {};

  
        CreateObjects(arr);
        try
        {
            std::cout << "Average budget: " << AverageBudget(arr) << "\n";
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
             Employee* res = EmployeeWithHighestSalary(arr);
             std::cout << "Employee with highest Salary: " << *res << "\n";
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
        try
        {
              
        int count = CountEmployeeWithGivenDepartment(arr, Department::DEVELOPMENT);
        std::cout << "Count of Employees with given Department: " << count << "\n";
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    
    FreeMemory(arr);
    }
    