#include "Functionalities.h"


void CreateObjects(Vehicle *container[3])
{
     container[0] = new Vehicle("135","Tvs Wego",Type::BIKE,4500.98);
     container[1] = new Vehicle("16","Maruti Suziki",Type::BIKE,75000.98);
     container[2] = new Vehicle("135","BMW",Type::CAR);

}

float  AveragePriceOfVehicle(Vehicle *container[3])
{
    float total = 0.0f;
    for(int i=0;i<3;i++){
        total+=container[i]->price();
    }
    return total/3;

}
