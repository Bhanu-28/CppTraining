#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "CreditCard.h"
#include "Customer.h"
#include <iostream>
#define SIZE 3 

void createObjects(Customer* arr[SIZE]);

std::string MinimumLimitAmongAllCustomerrs(Customer* arr[SIZE]);

void CountCustomerWithCardType(Customer* arr[SIZE],CrediCardType type);

void FreeMemory(Customer* arr[3]);







#endif // FUNCTIONALITIES_H
