#include <iostream>
#include<vector>
#include<list>




class Student
{
private:
        
        std::string _name;
public:
int _id;
    Student(int id,std::string name) {
        this->_id=id;
        this->_name=name;
    }
    ~Student() {}
};


class Engineer : public Student
{
private:
    std::string _course_name;
public:
    Engineer(int id,std::string name,std::string cname) 
    :Student(id,name){
        this->_course_name=cname=cname;
    }
    ~Engineer() {}
};

int main(){
    Engineer* e1 = new Engineer(101,"Harshit","BTECH:CS");
    Student*c1 = new Student(102,"harshit");
    Student* c2 = new Engineer(101,"bhanu","Mas:CS");
    // Student* arr[2];

     Student* arr[2]={e1,c1};   //upcasting (storing child details in parent) e1 is a student , c1 is a student

    std::list<Student*> data1={e1, c1};
    std::vector<Student*> data2={e1, c1};
    
    std::cout<<e1;
std::cout<<(c2->_id);


}









