#include <iostream>

 

int main(){

//                                                          address         name      content  

    int i = 6; //stores value 6                          0x7fff09a82b84      i            6

    int *n = &i; // stores address of i                  0x7fff09a82b88      n      0x7fff09a82b84

    int **j = &n; // stores address of n                 0x7fff09a82b90      j      0x7fff09a82b88

     

    std::cout <<"value in i is "<< i <<"\n";

    std::cout <<"address of &i is "<< &i <<"\n";

    std::cout <<"value of n is "<< n <<"\n";

    std::cout <<"address of n is "<< &n <<"\n";

    std::cout <<"value of j is "<< j <<"\n";

    std::cout <<"address of j is "<< &j <<"\n";

    std::cout <<"getting i value through n " << *n <<"\n";

    std::cout <<"getting i value through j " << **j <<"\n";

    std::cout <<"getting n value through j " << *j <<"\n";

 

}

