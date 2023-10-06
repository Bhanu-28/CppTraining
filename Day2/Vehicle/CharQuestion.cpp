#include <iostream>
#include<array>

int main(){
    char arr[6] ="hello";
    std::cout<<(void*)arr<<std::endl;
    int ids[2];
    ids[0]=12;
    ids[1]=89;
    ids[2]=90;
    std::cout<<ids[0]<<"\n"<<ids[1]<<"\n"<<ids[2]<<"\n"<<std::endl;

    std::array<int,4>duo;
    duo.at(0)=1;
    duo[1]= 50;
    std::cout<<duo[1]<<std::endl;

}