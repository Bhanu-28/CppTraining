#include <iostream>

/*
int &ptr //left side of & has a adata type (reference)
&ptr ;//no type to left of &(pointer)
*/
//call  by value :copy passed parameter into formal parameter 
//callby reference 
void magic(int& data){
std::cout<<"Address of n1 :"<<&data<<"\n";
std::cout<<"content of n1 :"<<data<<"\n";

data= 777;
std::cout<<"after modification data is "<<data <<"\n";

}
// void magic(int data){
// std::cout<<"Address of n1 :"<<&data<<"\n";
// std::cout<<"content of n1 :"<<data<<"\n";

// data= 777;
// std::cout<<"after modification data is "<<data <<"\n";

// }
int main(){
    int n1=10;
   // magic(10);//10 will be copied into scope of magic 
    magic(n1);//n1 will be copied into scope of magic 
  std::cout<<"value in main after calling magic :"<<n1<<"\n";
}