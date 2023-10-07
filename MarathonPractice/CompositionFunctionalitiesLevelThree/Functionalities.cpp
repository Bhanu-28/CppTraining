#include "Functionalities.h"
#define SIZE 3

bool CheckAllNullValues(Employee *arr[SIZE])
{
    bool flag = false;
    for(int i=0;i<SIZE,i++;){
        if(arr[i]!=nullptr){
            return true;
        }
    }
    return flag;
}

void CreateObjects(Employee *arr[SIZE])
{
    arr[0] = new Employee("763","bhanu",2500.89f,Department::DEVELOPMENT,new Project("Dcs",10,4897.54f));
    arr[1] = new Employee("45","pradeep",4502.89f,Department::INTEGRATION,new Project("Python",1,4000.54f));
    arr[2] = new Employee("1","kumar",326.89f,Department::TESTING,new Project("CPP",5,2202.54f));
}

Employee *EmployeeWithHighestSalary(Employee *arr[SIZE])
{
    if(CheckAllNullValues(arr)){
        throw std::runtime_error("data is empty please try again ...");
    }
    Employee* result = arr[0];
    float max = arr[0]->salary();
    float currentSalaryOfEmployee = 0.0f ;

    for(int i=0;i<SIZE;i++){
        currentSalaryOfEmployee = arr[i]->salary();
        if(currentSalaryOfEmployee>max){
            max= currentSalaryOfEmployee;
            result = arr[i];
        }
    }
    return result;
    
}

int CountOfEmployeesOfGivenDepartment(Employee* arr[SIZE], Department dpt)
{
    if(CheckAllNullValues(arr)){
        throw std::runtime_error("data is empty");
    }
    int count =0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->dept()==dpt){
            count++;
        }
    }
    return count;
}

float AverageBudgetOfAllProjects(Employee *arr2[SIZE])
{
    if(CheckAllNullValues(arr2)){
        throw std::runtime_error("data is empty \n");
    }
    float total = 0.0f;
    for(int i=0;i<SIZE;i++){
        total+=arr2[i]->project()->budget();
    }
    return total/SIZE;
    
}

void FreeMemoryOnHeap(Employee *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}
