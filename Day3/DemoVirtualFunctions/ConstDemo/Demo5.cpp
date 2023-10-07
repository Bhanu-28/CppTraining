#include <iostream>

void Demo(){

    int n1 =10;
    int n2 =20;
    //we can replace int with any data type like employee* float char double 
    //const id applied on 'int' not on 'int*'
//cant change both 
//both integer and pointer is constant
    //ptr is  constant pointer to any integer 
     const int * const ptr = &n1;
    //since pointer itself is  constant its content can't be changed,
    //so address inside ptr can't be changed 
    // ptr = &n2; // wont work since ptr itself is constant 
    //since int part is constant i can use pointer to change n1s value 
    // *ptr = 100; //not allowed
    n1 = 30;

}

int main(){

}