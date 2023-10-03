#include "Functionalities.h"
#include "Vehicle.h"
#include "Type.h"

void CreateObjects(Vehicle *container[3])
{
    //container's 0 index now holds address of object on the heap 
    container[0]= new Vehicle("v101","maruti",Type::CAR,48700.0f);
    container[1]= new Vehicle("v103","BMW",Type::BIKE,56700.0f);
    container[2]= new Vehicle("v104","Indigo",Type::OTHER,34700.0f);

}

/*
        loop over all location of the array 
        for each locations poniter 
        access _price attribute 
        add is total
        divide total by 3 and return    
*/

float AveragePrice(Vehicle *container[3])
{
    float total =0.0f;

    for(int i=0;i<3;i++){
        //total is previous total  added with  price value 
        //taken from address at i position 

        total +=(container[i])->price();
        //get the address
        //jump to the address 
        //call getter 

    }

    return total/3;

}


