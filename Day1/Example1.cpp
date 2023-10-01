#include <iostream>
#include<vector>
#include<list>


class Student
{
private:
        int _id;
        std::string _name;
public:
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
    Student* arr[2]
}








