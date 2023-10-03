#include <iostream>
#include<array>

int main(){
    char arr[6] ="hello";
    std::cout<<(void*)arr<<std::endl;
    int ids[2];
    ids[0]=12;
    ids[1]=89;
    ids[2]=90;
    std::cout<<ids[0]<<ids[1]<<ids[2]<<std::endl;

    std::array<int,4>duo;
    duo.at(0)=1;
    std::cout<<duo[0]<<std::endl;

}