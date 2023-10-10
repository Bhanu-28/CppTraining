#include "Bill.h"

Bill::Bill(float billAmount, float billTaxAmount, Invoice billAssociatedInvoice)
:_bill_amount(billAmount),_bill_tax_amount(billTaxAmount),_bill_associated_invoice(billAssociatedInvoice)
{
    if(billTaxAmount<billAmount){
        this->_bill_tax_amount=billTaxAmount;
    }else{
        throw std::runtime_error("enter value less than bill amount");
    }
}
std::ostream &operator<<(std::ostream &os, const Bill &rhs) {
    os << "_bill_amount: " << rhs._bill_amount
       << " _bill_tax_amount: " << rhs._bill_tax_amount
       << " _bill_associated_invoice: " << rhs._bill_associated_invoice;
    return os;
}




