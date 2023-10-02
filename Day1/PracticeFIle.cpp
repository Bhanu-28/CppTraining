#include<iostream>

class PracticeFIle
{
private:
    /* data */
    
public:
    int b = 218242;
    PracticeFIle(/* args */) {}
    ~PracticeFIle() {}
};
int main(){
    PracticeFIle* p1 = new PracticeFIle();
    std::cout<<p1->b;
}