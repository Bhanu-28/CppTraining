#include "Product.h"

Product::Product(std::string productId, ProductType productType, float productPrice, std::string productBrand)
:_product_id(productId),_product_type(productType),_product_price(productPrice),_product_brand(productBrand){

}
std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    os << "_product_id: " << rhs._product_id
       << " _product_type: " <<DisplayEnum(rhs._product_type)
       << " _product_price: " << rhs._product_price
       << " _product_brand: " << rhs._product_brand;
    return os;
}

std::string DisplayEnum(const ProductType value)
{
    if(value==ProductType::APPLIANCE){
        return "APPLIANCE";
    }
    else if(value == ProductType::FMCG){
        return "FMCG";
    }
    else{
        return "PERFUME";   
    }
}
