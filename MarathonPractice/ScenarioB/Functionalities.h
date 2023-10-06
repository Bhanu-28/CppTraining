#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3

#include "Car.h"

void CreateObjects(Car* arr[SIZE]);

float AverageTax(Car* arr[SIZE]);

void FunCalculateTax(Car* arr[SIZE]);

void FreeMemory(Car* arr[SIZE]);

#endif // FUNCTIONALITIES_H
