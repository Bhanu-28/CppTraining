#include "Employee.h"
#include "Project.h"
#include "Functionalities.h"
#include <iostream>
int main(){
    Employee* arr[3];
    Project* arr1[3];
    CreateObjects(arr,arr1);

    Employee* highest_paid_employee = EmployeeWithHighestSalary(arr);
    std::cout << "Employee with max salary: " << *highest_paid_employee ;

    std::cout << "\n------------------------\n";

    std::cout << "Count of employee is Development department: " << CountEmployeeWithGivenDepartment(arr,Department::DEVELOPMENT);

    std::cout << "\n------------------------\n";

    std::cout << "Average budget: " << AverageBudget(arr1);

    std::cout << "\n------------------------\n";

    FreeMemory(arr);
}