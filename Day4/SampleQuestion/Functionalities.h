#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Employee.h"
#include "Project.h"

//one employee 1 project
/* 
a function to create 3 objects of project in an array 
also create 3 objects of employees in a separate array 
link one project to one employee 

Input: 2 arrays (one for employee), (second for project)
output: void 
*/
void CreateObjects( Employee* arr[3], Project* arr2[3]);


/* 
 a function to return pointer to employee with highest salary 
*/
Employee* EmployeeWithHighestSalary(Employee* arr1[3],Department dept);


/* a function to return count of all employees in the array 
whose _dept value matches with the second parameter passed to this function 
*/
int CountEmployeeWithGivenDepartment(Employee* arr[3],Department dept);


/* 
find the average_budget for all the projects 
*/
float AverageBudget(Project* arr2[3]);


/* 
a function to deallocate the heap reservation made throughout the program
*/
void FreeMemory(Employee* arr1[3]);
#endif // FUNCTIONALITIES_H
