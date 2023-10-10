#include <iostream>
#include "functionalities.h"
#include <iostream>
#define SIZE 3
int main(){
        Customer* arr[SIZE];

        createObjects(arr);
        std::cout<<"created Objects ..."<<std::endl;
        std::cout<<"\n-------------------\n";
        std::cout<<"Minimum limit among all  customers  ..."<<std::endl;
        std::cout<<MinimumLimitAmongAllCustomerrs(arr)<<std::endl;
        std::cout<<"\n-------------------\n";
        std::cout<<" customer  with card type ..."<<std::endl;
        CountCustomerWithCardType(arr,CrediCardType::MILES);
        std::cout<<"\n-------------------\n";
        FreeMemory(arr);




        

}