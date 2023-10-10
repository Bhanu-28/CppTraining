#include <iostream>
#include "functionalities.h"
#define SIZE 5
int main(){
    Product* arr[SIZE];
    CreateObjects(arr);
    std::cout<<"average prouct price"<<FindAverageProductPrice(arr)<<std::endl;
    std::cout<<"product with minimum price "<<getProductTaxPriceWithMinimumPrice(arr)<<std::endl;
    std::cout<<*MaximumProductPrice(arr)<<std::endl;
    FreeMemeoryOfAllocation(arr);
}