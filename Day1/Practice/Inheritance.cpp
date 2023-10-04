#include <iostream>


class Student
{
private:

    /* data */
public:
    int _id;
    std::string _name;
    Student(int id,std::string name){
        this->_id=id;
        this->_name=name;
    }
    ~Student() {
        std::cout
        <<"student with id :"
        <<_id
        <<"is destroyed \n";
    }
};

class Engineer : public Student
{
private:
    /* data */
public:
    std::string _project_name;

    Engineer(int id,std::string name,std::string projectname)
    :Student(id,name){
        this->_project_name=projectname;
    } 
    void display(){
        std::cout<<"id "<<_id<<"\n"<<"name : "<<_name<<"\n"<<"project name : "<<_project_name<<std::endl;
    }
    ~Engineer() {
                std::cout
        <<"Employee with id :"
        <<_id
        <<"is destroyed \n";
    }
};

int main(){
    Engineer* e1 = new Engineer(1,"rahul","genesis");
    Student*s1 = new Student(18,"bhanu");
    Student* s2 = new Engineer(45,"rohit cp ","copyMan");

    std::cout<<s1->_id<<std::endl;
    std::cout<<s1->_name<<std::endl;
    std::cout<<e1->_project_name<<std::endl;
    std::cout<<s2->_name<<std::endl;

//  you can access base class methods and data members through a
//  pointer to the base class, but if you want to access derived class-specific
//  methods or data members, you'll need to perform a cast to the derived class type.
//cant use s2->display();

    e1->display();

    delete e1;
    delete s1;
    delete s2;


}


