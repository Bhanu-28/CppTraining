#include <iostream>
/*
0*100H | 0*104H | -------
[  1        2    |-------    ]
*/
int main(){
    int arr[5] = {1,2,3,4,5};

    std::cout
        <<"content or arr:(adreess of first loaction)"
        <<arr
        <<"\n";
    std::cout   
        <<"address of first location : "
        <<(arr +0)  //0*100H + 0*4 = 0*100H
        <<"\n";
    std::cout   
        <<"address inside  first location doing 1 jump : "
        <<*(arr +0)  //0*100H + 0*4 = 0*100H
        <<"\n";
}