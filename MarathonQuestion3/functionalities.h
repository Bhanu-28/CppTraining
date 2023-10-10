#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Invoice.h"
#include "Bill.h"
#include "InvoiceType.h"
#define SIZE 3 

/* invoice of bill instance with highest bill amount */
void checkNull(Bill *arr[SIZE]);
void CreateObject(Bill* arr[SIZE]);
std::string InvoiceNumberOfHighestBillAmount(Bill* arr[SIZE]);

Invoice** ReturnInvoiceWithBillAmount(Bill* arr[SIZE],float billAmount) ;

// void GetHighestAmountFromBill(Bill* arr[SIZE]);

float FindTheBillAmountByInvoiceNumber(Bill* arr[SIZE], std::string invoiceNumber);


Invoice  MaximumBillAmount(Bill* Bill[SIZE]);
Invoice MinimumBillAmount(Bill* Bill[SIZE]);
void  FreeMemory(Bill* arr[SIZE]);


#endif // FUNCTIONALITIES_H




