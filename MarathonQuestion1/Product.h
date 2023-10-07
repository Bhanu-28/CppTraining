#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include "ProductType.h"
class Product
{
private:
   
    std::string _product_id;
    ProductType _product_type;
    float _product_price;
    std::string _product_brand;
public:
    Product(std::string productId,ProductType productType,float productPrice,std::string productBrand) ;
    ~Product() {
        std::cout<<"product with id "
        <<_product_id
        <<"is destroyed..\n";
    }

    std::string productId() const { return _product_id; }

    ProductType productType() const { return _product_type; }

    float productPrice() const { return _product_price; }

    std::string productBrand() const { return _product_brand; }



 

    friend std::ostream &operator<<(std::ostream &os, const Product &rhs);
    
};
std::string DisplayEnum(const ProductType value);

#endif // PRODUCT_H
