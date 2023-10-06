#include <iostream>
#include <list>
#include <vector>

//alias of data type alternate name 
using ls = std::list<std::string>;

//small version of stl containers 
//whenever u use template mark class as template 
//class or typename same for compiler 
template <typename T>
class Employee
{
private:
    //choose type of container like queue list stack to store skills vector arr of skills 
    T  _skills;
    std::string _id;
    float _age;

public:
    Employee(T skills,std::string id,float age) 
    :_skills(skills),_id(id),_age(age){

    }
    ~Employee() {
        std::cout<<"employee with id :"
        <<_id<<"is destroyed \n";
    }
};

int main(){
    ls skills = {"coding","ai","version control"};
    //object of class employee of list of strings 
    Employee<ls>* e1 = new Employee<ls>(skills,"emp218",22.5);
    
}