#ifndef INVOICE_H
#define INVOICE_H
#include "InvoiceType.h"
#include <iostream>

class Invoice
{
private:
    /* data */
    std::string _invoice_number;
    InvoideType _invoice_type;
    int _invoice_items;
public:
Invoice(const Invoice& ) = default;
    Invoice(std::string invoiceNumber,InvoideType invoiceType,int invoiceItems);
    ~Invoice() {

    }

    std::string invoiceNumber() const { return _invoice_number; }

    InvoideType invoiceType() const { return _invoice_type; }

    int invoiceItems() const { return _invoice_items; }

    friend std::ostream &operator<<(std::ostream &os, const Invoice &rhs);
};
std::string DisplayEnum(const InvoideType value);

#endif // INVOICE_H
