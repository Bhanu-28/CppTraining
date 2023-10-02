#include <iostream>

int main(){
    //877
    //909
    //2028
    int n1 =10;
    int *ptr =&n1;
    int **Sptr = &ptr ;

    //data inside n1
    std::cout<<"Data inside n1 :"<<n1<<"\n";
    //data inside ptr
    std::cout<<"Data inside ptr :"<<ptr<<"\n";
    //data inside Sptr
    std::cout<<"Data inside Sptr :"<<Sptr<<"\n" ;  
    //jump ptr 1 time 
    std::cout<<"jump ptr 1 time  :"<<*ptr<<"\n";
    //jump Sptr 2 time 
    std::cout<<"double ** jump sptr :"<<**Sptr<<"\n";
    //address of n1 
    std::cout <<"Address of n1 :"<<&n1<<"\n";
    //address of ptr 
    std::cout <<"Address of ptr :"<<&ptr<<"\n";
    //address of Sptr
    std::cout <<"Address of Sptr :"<<&Sptr<<"\n";


    //basic prograns 
    //sum of array fibonacci series 


}