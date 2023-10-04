#include "Functionalities.h"

void CreateObjects(Vehicle *arr[3])
{
    arr[0] = new Vehicle("v101","benz",9807.9f,VehicleType::CAR);
   arr[1] = new Vehicle("v101","creta",807.99f,VehicleType::CAR);
    arr[2] = new Vehicle("v101","Audi",87807.89f,VehicleType::CAR);
}

float AveragePrice(Vehicle *arr[3])
{
    float total = 0.0f;
        for(int i=0;i<3;i++){
        total +=arr[i]->price();
        }

        return total/3;
}

/* lets assume the first car as minimum and lets check whether its true if not 
it gets updated */
void MinPriceCarDetails(Vehicle *arr[3])
{
    Vehicle* result= arr[0];
    float min = arr[0]->price();//min

    for(int i=0;i<3;i++){
        if(arr[i]->price()<min){
         min = arr[i]->price();
            result = arr[i];
        }
    }
    std::cout<<* result <<"\n";
}
