


/* 

for developers who will use this library for mathematical operation 
*/
//purely a library it can be used to include in other programs 

//just include in a file


#include <iostream>

float square(float number){
    return number*number;
}

float percentage(float number,float pct_factor){
    return number*(pct_factor/100);
}

float cube(float number){
    return number*number*number;
}

int Factorial(int number){
    if(number<0){
        throw std::runtime_error("negative number problem");
    }
    else if(number==1){
        return 1;

    }
    else{
        return number* Factorial(number-1);
    }
}