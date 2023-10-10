#include "functionalities.h"
#include "Customer.h"
#define SIZE 3 
void createObjects(Customer *arr[SIZE])

{
    arr[0] = new Customer("bhanu","218242",CustomerType::ELITE, new  CreditCard("1234",CrediCardType::SIGNATURE,500.67f,345));
    arr[1] = new Customer("Pradeep","67824",CustomerType::PRIVILIGED, new  CreditCard("8974",CrediCardType::NEO,70040.67f,113));
    arr[2] = new Customer("Kumar","3828",CustomerType::PRO, new  CreditCard("678",CrediCardType::MILES,200.67f,789));

}

std::string MinimumLimitAmongAllCustomerrs(Customer *arr[SIZE])
{
    
    std::string number;
    float min = arr[0]->card()->limit();
    float currentLimtofCustomer = 0.0f;
    for(int i=0;i<SIZE;i++){
     currentLimtofCustomer = arr[i]->card()->limit();
    if(currentLimtofCustomer<min){
        min = currentLimtofCustomer;
        number = arr[i]->card()->number();
       }
    }
    return number;

}

void  CountCustomerWithCardType(Customer *arr[SIZE], CrediCardType type)
{
       
    for(int i=0;i<SIZE;i++){
        if(arr[i]->card()->crType()==type){
            std::cout<<*arr[i]<<"\n";
        }
    }

   
}

void FreeMemory(Customer *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}
