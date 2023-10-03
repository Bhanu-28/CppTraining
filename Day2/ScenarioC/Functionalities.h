#include "Car.h"
#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Bike.h"
#include "CarType.h"
/*
function should create objects on heap and store their pointers 
in the array 
*/
void CreateObjects(Vehicle* garage[3]);

//ctr1+. =>create definition in .cpp
/* average price for all cars */
float AveragePrice(Vehicle* garage[3]);

//demo of calculate tax 
void CallCalculateTax(Vehicle* garage[3]);

//delate all acquired memory 
void FreeMemory(Vehicle *garage[3]);

#endif // FUNCTIONALITIES_H
