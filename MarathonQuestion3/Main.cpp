

#include <iostream>
#define SIZE 3
#include "functionalities.h"
#include "Invoice.h"
#include "Bill.h"

int main(){
        std::cout<<"create objects ...\n";
        Bill* arr[SIZE];

        try{
                CreateObject(arr);
                std::cout<<"Highest amount invoice...\n";
                std::cout<<InvoiceNumberOfHighestBillAmount(arr) <<"\n";
                std::cout<<"get invoice with bill amount ...\n";
                Invoice **invoc = ReturnInvoiceWithBillAmount(arr,200);
                for(int i=0;i<SIZE;i++){
                        if(invoc[i]!=nullptr){
                                std::cout<<*invoc[i]<<"\n";
                        }
                }

                std::cout<<"Max bill amount of bhanu spent in reliance \n";
                std::cout<<MaximumBillAmount(arr)<<std::endl;
                std::cout<<"Min bill amount of bhanu spent in reliance \n";
                std::cout<<MinimumBillAmount(arr)<<std::endl;
                
                FreeMemory(arr);



        }
        catch(const std::exception &e){
                std::runtime_error("error check once");
        }

}


















/*
#include "Functionalities.h"
#include <iostream>

int main()
{
    std::cout << "Create Objects.....\n";
        Bill *bills[SIZE];
            Bill *exceptionBill[SIZE]={nullptr};
                try
                    {
                            createBills(bills);

                                    std::cout << "Get Invoice Number of Highest Bill Amount.....";
                                            std::cout << GetInvoiceNumberOfHighestBillAmount(bills) << "\n";
                                                    std::cout << "Get Bill Amount with Invoice Number.....";

                                                            std::cout << GetBillAmountWithInvoiceNumber(bills, "INV002") << "\n";
                                                                    std::cout << "Get Invoices with Bill Amount.....\n";
                                                                            Invoice **invoices = GetInvoicesWithBillAmount(bills, 2000);
                                                                                    for (int i = 0; i < SIZE; i++)
                                                                                            {
                                                                                                        if (invoices[i] != nullptr)
                                                                                                                    {
                                                                                                                                    std::cout << *invoices[i] << "\n";
                                                                                                                                                }
                                                                                                                                                        }
                                                                                                                                                                std::cout << "Maximum Bill Amount.....\n";
                                                                                                                                                                        std::cout << MaximumbillAmount(bills) << "\n";
                                                                                                                                                                                std::cout << "Minimum Bill Amount.....\n";
                                                                                                                                                                                        std::cout << MinimumbillAmount(bills) << "\n";
                                                                                                                                                                                                std::cout << "Free Invoices.....\n";
                                                                                                                                                                                                        FreeInvoices(bills);
                                                                                                                                                                                                            }
                                                                                                                                                                                                                catch (const std::exception &e)
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                            std::cerr << e.what() << '\n';
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                }

*/