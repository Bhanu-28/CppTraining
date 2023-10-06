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


Employee *EmployeeWithHighestSalary(Employee *arr1[3])
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


void CreateObjects(Employee *emp_arr[3], Project *project_arr[3])
{
    

    //3 project objects
    project_arr[0]= new Project("CPP Project",70,20000000.f);
    project_arr[1]= new Project("JAVA Project",40,10000000.f);
    //project_arr[2]= new Project("PYTHON Project",30,10000000.f);
    project_arr[2]= new Project("PYTHON Project",30,10000000.f);



    //creating 3  employee objects 
    emp_arr[0]= new Employee("emp101", "Prakhyath",30000.0f,Department::DEVELOPMENT,project_arr[0]);
    emp_arr[1]= new Employee("emp102", "Ganavi",50000.0f,Department::DEVELOPMENT,project_arr[1]);
    emp_arr[2]= new Employee("emp103", "Prath",60000.0f,Department::TESTING,project_arr[2]);
   

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



