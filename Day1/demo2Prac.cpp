#include <iostream>


int main(){
    int n1 = 10;
    int *ptr = &n1;
    int **Sptr = &ptr ;

    std::cout<<"content of n1 :"<<n1<<"\n"<<"ptr :"<<ptr<<"\n"<<"sptr"<<Sptr<<"\n";
    std::cout<<"adress of n1 :"<<&n1<<"\n"<<"ptr adress :"<<&ptr<<"\n"<<"sptr adress" <<&Sptr<<"\n";


    int arr[5] ={108,90,78,06,56};

    std::cout<<"content of first location "
    <<arr
    <<"\n";
    
    std::cout<<"content of first location "
    <<(arr+0)
    <<"\n";
    std::cout<<"jump  of first location and adress"
    <<*(arr+0)
    <<&arr
    <<"\n";
    std::cout<<"jump  of second location and adress"
    <<*arr+1
    <<&arr+1
    <<"\n";
    std::cout<<"jump  of third location and adress"
    <<*(arr+2)
    <<&arr+2
    <<"\n";
    std::cout<<"jump  of fourth location and adress"
    <<*(arr+3)
    <<&arr+3
    <<"\n";
    std::cout<<"jump  of fifth location and adress"
    <<*(arr+4)
    <<&arr+4
    <<"\n";


}