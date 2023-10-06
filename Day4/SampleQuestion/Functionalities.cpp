#include <iostream>
#include "Functionalities.h"
#include "Project.h"
void FreeMemory(Employee *arr1[3])
{
    //delete the inner project pointer
    for(int i=0;i<3;i++){
        delete arr1[i]->project();
        delete arr1[i];
    }
}

float AverageBudget(Project *arr2[3])
{
    float total =0.0f;
    for(int i=0;i<3;i++){
        total+=arr2[i]->budget();
    }
    return total/3;

}


Employee *EmployeeWithHighestSalary(Employee *arr1[3],Department dept)
{
    Employee* result = nullptr;
    //assume first employee salary as highest 
    float max = arr1[0]->salary(); 
    //take 1 variable for recording current position objects salary in loop 
    float currentSal = 0.0f;
    for(int i=0;i<3;i++){
        //fetch current position employees salary 
        currentSal=arr1[i]->salary();
        //if current sal is more than max,update max and result pointers
        if(currentSal > max){
            max=currentSal;
            result = arr1[i]; 
        }
    } 
    //return result AFTER THE WHOLE LOOP ONLY 
    return result;
}

void CreateObjects(Employee *arr[3], Project *arr2[3])
{
}

int CountEmployeeWithGivenDepartment(Employee *arr[3],Department dept)
{
    float count = 0.0f;
    for(int i=0;i<3;i++){
        if(arr[i]->dept()==dept){
            count++;
        }
    }
    return count;
}



