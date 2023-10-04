#include <iostream>

class Factorial{
public:
static int CalculateFactorial(int num){
    if(num==0 || num ==1){
        return 1;
    }
    else if(num <0){
        return -1;
    }
    else{
int ans =1;
for(int count=2;count<=num;count++){
    ans*=count;
}
return ans;
    }

}
};

int main(){
    CalculateFactorial(10);
}