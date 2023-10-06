#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Employee.h"
#include "Project.h"

#define SIZE 3
/* 
    a function to check if all psoitions of the array are nullptr 

*/
bool CheckNull(Employee* arr[SIZE]);


/* 



***create 3 objects of employees in an array 
link one project to one employee 

Input: 1 array (one for employees)
output: void 
*/
void CreateObjects( Employee* arr[SIZE]);


/* 
 a function to return pointer to employee with highest salary 
*/
Employee* EmployeeWithHighestSalary(Employee* arr1[SIZE]);


/* a function to return count of all employees in the array 
whose _dept value matches with the second parameter passed to this function 
*/
int CountEmployeeWithGivenDepartment(Employee* arr[SIZE],Department dept);


/* 
find the average_budget for all the projects 
*/
float AverageBudget(Project* arr2[SIZE]);

float AverageBudget(Employee* arr2[SIZE]);


/* 
a function to deallocate the heap reservation made throughout the program
*/
void FreeMemory(Employee* arr1[SIZE]);
#endif // FUNCTIONALITIES_H













//a function to create 3 objects of project in an array 
// also 