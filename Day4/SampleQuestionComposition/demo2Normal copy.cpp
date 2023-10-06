#include <iostream>
#include <list>
#include <vector>

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

    template <typename F>
    friend std::ostream &operator<<(std::ostream &os, const Employee<F> &rhs) {
        os << "_skills: " ;
        //for each loop (range-based for cpp)
        for( std::string element: rhs._skills){
            os<<element<<"\t";
        }
         os  << " _id: " << rhs._id
           << " _age: " << rhs._age;
        return os;
    }
    
};

int main(){
    ls skills = {"coding","ai","version control"};
    //object of class employee of list of strings 
    Employee<ls>* e1 = new Employee<ls>(skills,"emp218",22.5);
    std::cout<<*e1<<std::endl;
    
}