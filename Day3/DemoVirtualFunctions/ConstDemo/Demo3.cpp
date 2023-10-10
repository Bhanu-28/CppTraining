#include <iostream>

void Demo(){

    int n1 =10;
    int n2 =20;
    //const id applied on 'int' not on 'int*'

    //ptr is a poniter a constant integer 
     int const * ptr = &n1;
    //since pointer itself is not constant its content can be changed,
    //so address inside ptr can be changed 
    ptr = &n2;
    //since int part is constant i cant use pointer to change n1s value 
    // *ptr = 100; //not allowed

    n1 = 30;

}

int main(){

}