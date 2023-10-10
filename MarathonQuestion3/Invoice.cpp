#include "Invoice.h"

Invoice::Invoice(std::string invoiceNumber, InvoideType invoiceType, int invoiceItems)
:_invoice_number(invoiceNumber),_invoice_type(invoiceType),_invoice_items(invoiceItems){

}
std::ostream &operator<<(std::ostream &os, const Invoice &rhs) {
    os << "_invoice_number: " << rhs._invoice_number
       << " _invoice_type: " <<DisplayEnum(rhs._invoice_type)
       << " _invoice_items: " << rhs._invoice_items;
    return os;
}

std::string DisplayEnum(const InvoideType value)
{
    if(value==InvoideType::E_BILL){
        return "E_BILL";
    }
    else if(value == InvoideType::PAPER_SLIP){
        return "PAPER_SLIP";
    }
    else{
        return "SMS_GENERATED";
    }
}
