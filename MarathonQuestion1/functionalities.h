#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Product.h"
#define SIZE 5

void CreateObjects(Product* arr[SIZE]);

float FindAverageProductPrice(Product* arr[SIZE]);


/* write a function to return the product tax price of the product with minimum productprice */

float getProductTaxPriceWithMinimumPrice(Product* arr[SIZE]) ;


Product* MaximumProductPrice(Product* arrp[SIZE]);

void FreeMemeoryOfAllocation(Product* arr[SIZE]);


#endif // FUNCTIONALITIES_H
