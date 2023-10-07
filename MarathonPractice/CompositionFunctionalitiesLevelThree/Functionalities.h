#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Project.h"
#include "Employee.h"

#define SIZE 3 


bool CheckAllNullValues(Employee  *arr[SIZE]);

void CreateObjects(Employee* arr[SIZE]);

Employee* EmployeeWithHighestSalary(Employee* arr[SIZE]);

int CountOfEmployeesOfGivenDepartment(Employee* arr[SIZE],Department dpt);

float AverageBudgetOfAllProjects(Employee* arr[SIZE]);


void FreeMemoryOnHeap(Employee* arr[SIZE]);






#endif // FUNCTIONALITIES_H
