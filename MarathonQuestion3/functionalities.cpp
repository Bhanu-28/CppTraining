#include "functionalities.h"
#include <iostream>

void CheckNull(Bill *arr[SIZE])
{
    
    for(int i=0;i<SIZE;i++) {
        if (arr[i] != nullptr) {
        return ;
        }
    }
    throw std::runtime_error("bills were empty kindly debug");


    ;
}
void CreateObject(Bill *arr[SIZE])
{
    
    
    arr[0] = new Bill(2000.89f,29,  Invoice("2182",InvoideType::E_BILL,3));
    arr[1] = new Bill(4000.89f,49,  Invoice("789",InvoideType::PAPER_SLIP,2));
    arr[2] = new Bill(9000.120f,29,  Invoice("6474",InvoideType::SMS_GENERATED,9));

}

std::string InvoiceNumberOfHighestBillAmount(Bill *arr[SIZE])
{

    int max =0;
    for(int i=1;i<SIZE;i++){
        if(arr[i]->billAmount()>arr[max]->billAmount())
        {
            max = i;
        }
    }
    return arr[max]->billAssociatedInvoice().invoiceNumber();
    

}

Invoice **ReturnInvoiceWithBillAmount(Bill *arr[SIZE], float billAmounts)
{
    Invoice** invoc = new Invoice *[SIZE];
    int  count=0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->billAmount() >=billAmounts){
            std::cout<<"hi";
            invoc[count++] = new Invoice(arr[i]->billAssociatedInvoice());
        }
    }
    if (count == 0)
{
    throw std::runtime_error(" invoices was not there kindly recheck ");
}
 return invoc;
 
}

float FindTheBillAmountByInvoiceNumber(Bill *arr[SIZE], std::string invoiceNumber)
{
    for(int i=0;i<SIZE;i++){

        if(arr[i]->billAssociatedInvoice().invoiceNumber()== invoiceNumber)
    {
        return arr[i]->billAmount();
    }
    }
    throw std::runtime_error("invoice not found..");

}

Invoice MaximumBillAmount(Bill *arr[SIZE])
{
    int max =0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->billAmount() >arr[max]->billAmount()){
            max = i;
        }
    }
    return Invoice(arr[max]->billAssociatedInvoice());
}

Invoice MinimumBillAmount(Bill *arr[SIZE])
{
    int min =0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->billAmount()<arr[min]->billAmount()){
            min= i;
        }
    }
    return Invoice(arr[min]->billAssociatedInvoice());
}

void FreeMemory(Bill* arr[SIZE]){
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}



