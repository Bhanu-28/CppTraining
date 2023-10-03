#include "Car.h"
#include "Functionalities.h"

int main(){
    Car* arr[3]; //3 locations reserved ; each location can store 8 bytes (address) 24 bytes of memory when u start create objects adress will change 
    CreateObjects(arr);
    std::cout<<"average price"<<AveragePrice(arr)<<::std::endl;
    FreeMemory(arr);

    //valid grint ->checks heap memory if there is any leakage 
}