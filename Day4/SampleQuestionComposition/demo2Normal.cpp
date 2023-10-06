#include <iostream>
#include <list>
#include <vector>



//small version of stl containers 
//whenever u use template mark class as template 
//class or typename same for compiler 

class Employee
{
private:
    //choose type of container like queue list stack to store skills vector arr of skills 
    std::list<std::string>  _skills;
    std::string _id;
    float _age;

public:
    Employee(std::list<std::string> skills,std::string id,float age) 
    :_skills(skills),_id(id),_age(age){

    }
    ~Employee() {
        std::cout<<"employee with id :"
        <<_id<<"is destroyed \n";
    }
};

int main(){
    std::list<std::string> skills = {"coding","ai","version control"};
    //object of class employee of list of strings 
    Employee* e1 = new Employee(skills,"emp218",22.5);
    
}