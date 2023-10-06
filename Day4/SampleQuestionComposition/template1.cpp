#include <iostream>

//generics in java and templates in cpp 

template<typename T>
void display(T arr[3]){
    for(int i=0;i<3;i++){
        std::cout<<"address :"<<arr[i]<<std::endl;
    }
}

class Employee
{
private:
    /* data */
public:
    Employee(/* args */) {}
    ~Employee() {}
};

class Car
{
private:
    /* data */
public:
    Car(/* args */) {}
    ~Car() {}
};

int main(){
    Car* arr1[3];
    Employee* arr2[3];

    for(int i=0;i<3;i++){
        arr1[i] = new Car();
        arr2[i]= new Employee();
        }

    display<Car*>(arr1);
    display<Employee*>(arr2);
//compile time argument detection for latest  means can remove <>
//templates came under  compile time polymorphism in oops 
// as display same name different functionalities 

}