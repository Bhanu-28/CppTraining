#include <iostream>

//call by value 
// void Magic(int data){
    
//     std::cout<<"before modify"<<data<<std::endl;
//     data = 20;
//     std::cout<<"after modfy"<<data<<std::endl;

// }
//call by reference 
void Magic(int& data){
    
    std::cout<<"before modify"<<data<<std::endl;
    data = 20;
    std::cout<<"after modfy"<<data<<std::endl;

}


int main(){
    int n1= 80;
     Magic(n1);
     std::cout<<"main"<<n1<<std::endl;
}