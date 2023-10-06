#include <iostream>

void print(int* arr[3]){

arr[0] = new int();
arr[1] = new int();
arr[2] = new int();
std::cout<<arr[0]<<std::endl;


}

int main(){

    int* i[3] ;

    print(i);

    
}