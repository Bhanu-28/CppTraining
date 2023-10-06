#include <iostream>
#include "Functionalities.h"
#include "Project.h"
#define SIZE 3

//composition code 
bool CheckNull(Employee *arr[SIZE])

    {
    bool flag= true;
    for(int i=0;i<3;i++){
        if(arr[i]!= nullptr){
            return false;
        }
    }
    return flag;

}
void CreateObjects(Employee *arr1[SIZE])
{
    arr1[0] = new Employee{
        "E101",
        "Harshit",
        67.89f,
        Department::DEVELOPMENT,
        new Project("KAP",80,786.8f)
    };
        arr1[1] = new Employee{
        "E102",
        "relaince",
        67.89f,
        Department::TESTING,
        new Project("KAP",80,786.8f)
    };
        arr1[2] = new Employee{
        "E102",
        "gio",
        67.89f,
        Department::INTEGRATION,
        new Project("KAP",80,786.8f)
    };
}
Employee *EmployeeWithHighestSalary(Employee *arr1[SIZE])
{
    if(CheckNull(arr1)){
        //data is empty !
        throw std::runtime_error("data is empty!");  
    }

    Employee* result = arr1[0];
    //assume first employee salary as highest 
    float max = arr1[0]->salary(); 
    //take 1 variable for recording current position objects salary in loop 
    float currentSal = 0.0f;
    for(int i=0;i<SIZE;i++){
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

int CountEmployeeWithGivenDepartment(Employee *arr[SIZE],Department dept)
{
    if(CheckNull(arr)){
        throw std::runtime_error("data is empty");
    }
    int count =0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->dept()==dept){
            count++;
        }
    }

    return count;
}
float AverageBudget(Employee *arr3[SIZE])
{
        if(CheckNull(arr3)){
        //data is empty !
        throw std::runtime_error("data is empty!");  
    }
    float total =0.0f;
    for(int i=0;i<SIZE;i++){
        //access pointer first and then access budget from it 
        total+=arr3[i]->project()->budget();
    }
    return total/3;

}

void FreeMemory(Employee *arr1[SIZE])
{
    //delete the inner project pointer
    for(int i=0;i<SIZE;i++){
        // delete arr1[i]->project();
        delete arr1[i]; //ensure this also deletes project!!
    }
}

// float AverageBudget(Project *arr2[SIZE])
// {


//     float total =0.0f;
//     for(int i=0;i<SIZE;i++){
//         total+=arr2[i]->budget();
//     }
//     return total/3;

// }











//if u write code people should take picture and keep it in museum of modern art


