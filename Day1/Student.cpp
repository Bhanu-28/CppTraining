#include <iostream>
#include "Department.h"

class Student
{
private:
    int _roll_number;
    std::string _name;
    float _fees;
    char _grade;
    Department _dept; //IT,CS,AI_ML


public:
    Student() =default; //t will set the default values to the all the variable available
    //parameterized constructor 
    Student(
        int rnum,
        std::string name,
        float fees,
        char grade,
        Department dept
    ){
        this->_name=name;
        this->_fees=fees;
        this->_roll_number=rnum;
        this->_grade=grade;
        this->_dept=dept;
    }
    ~Student() {
        std::cout<<"Student with roll number :"
        <<this->_roll_number
        <<"is now destroyed \n";
    }
};

int main(){
    //array is like pointer
    //stack 
    //stack upon reaching end will get deallocated  
    //s1 data type student   
    Student s1(218,"bhanu",877.0f,'A',Department::CS);
    Student s3(102,"kumar",8777.0f,'C',Department::IT);
    //heap //address will come 
    // need to triger manually 
    //memory leak if not triggered 
    //s2 data type student pointer
    Student* s2=new Student(242,"pradeep",890.8f,'B',Department::AI_ML);
    Student* s4=new Student(403,"yolo",890.8f,'B',Department::AI_ML);

    delete s2;
    //stack objects data of similar data type
    Student arr[2] ={s1,s3};//array of stack allocated Student Objects 
    //heap objects 
    Student* heapArr[2] ={s2,s4};
    

    }