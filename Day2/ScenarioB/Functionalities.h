#include "Car.h"
#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

/*
function should create objects on heap and store their pointers 
in the array 
*/
void CreateObjects(Car* arr[3]);

//ctr1+. =>create definition in .cpp
/* average price for all cars */
float AveragePrice(Car* arr[3]);

//demo of calculate tax 
void CallCalculateTax(Car* arr[3]);

//delate all acquired memory 
void FreeMemory(Car *arr[3]);

#endif // FUNCTIONALITIES_H
