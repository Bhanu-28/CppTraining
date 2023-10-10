#include "functionalities.h"
#include "Product.h"
#include "ProductType.h"

void CreateObjects(Product *arr[SIZE])


{
    arr[0]  = new Product("2182",ProductType::APPLIANCE,45000,"Nothing Ear 1");
    arr[1]  = new Product("567",ProductType::PERFUME,2600,"Nothing Perfume 2");
    arr[2]  = new Product("789",ProductType::APPLIANCE,240,"Nothing Ear 2");
    arr[3]  = new Product("223",ProductType::FMCG,450,"Nothing");
    arr[4]  = new Product("222",ProductType::APPLIANCE,4590,"Nothing Phone 2");

}

float FindAverageProductPrice(Product *arr[SIZE])
{
    float total = 0.0f;
    for(int i=0;i<SIZE;i++){
        total+=(arr[i]->productPrice());
    }
    return total/SIZE;
}

    float calculateTax(float price) {
    const float taxRate = 0.1; // 10% tax rate
    return price * taxRate;
}

// float getProductTaxPriceWithMinimumPrice()

float getProductTaxPriceWithMinimumPrice(Product *arr[SIZE])
{
    // Find the product with the minimum price
    Product* minProduct = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i]->productPrice() < minProduct->productPrice()) {
            minProduct = arr[i];
        }
    }
    
    // Calculate the tax price for the product with the minimum price
    float taxPrice = calculateTax(minProduct->productPrice());
    return taxPrice;
}

Product *MaximumProductPrice(Product *arrp[SIZE])
{
    Product* result = arrp[0];
    float max = arrp[0]->productPrice();
    float currentPrice =0.0f;
    for(int i=0;i<SIZE;i++){
        currentPrice=arrp[i]->productPrice();

        if(currentPrice>max){
            max = currentPrice;
            result = arrp[i];
        }
    }
    return result;

}

void FreeMemeoryOfAllocation(Product *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}
