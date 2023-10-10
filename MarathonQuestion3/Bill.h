#ifndef BILL_H
#define BILL_H
#include "Invoice.h"
#include <ostream>
class Bill
{
private:
    /* data */
    float _bill_amount;
    float _bill_tax_amount;
    Invoice _bill_associated_invoice;
public:
    Bill(float billAmount,float billTaxAmount,Invoice billAssociatedInvoice);
    Bill(const Bill&) = default;
    ~Bill() {}

    float billAmount() const { return _bill_amount; }

    float billTaxAmount() const { return _bill_tax_amount; }

    Invoice billAssociatedInvoice() const { return _bill_associated_invoice; }

    friend std::ostream &operator<<(std::ostream &os, const Bill &rhs);
};

#endif // BILL_H
