/* 

for end user  
*/



#include <iostream>

float square(float number){
    return number*number;
}

float percentage(float number,float pct_factor){
    return number*(pct_factor/100);
}

float cube(float number){
    return number*number*number;
}

int Factorial(int number){
    if(number<0){
        throw std::runtime_error("negative number problem");
    }
    else if(number==1){
        return 1;

    }
    else{
        return number* Factorial(number-1);
    }
}
void SwitchMenu(){
    while(true){
        int choice=0;
        float number;
        std::cout<<"enter a number :";
        std::cin>>number;
        std::cout<<"ENTER 1 FOR SQUARE \n 2 FOR CUBE \n 3 FOR FACTORIAL\n";
        std::cin >>choice;
        
        switch(choice){
            case 1:
                square(number);
                break;
            case 2:
                cube(number);
                break;
            case 3:
            // Factorial((int)number); //explicit type casting!
            //native cpp syntax 
                try{
                Factorial(static_cast<int>(number));
                }catch(std::runtime_error& ex){
                    std::cout<<ex.what() <<"\n";
                }
                break;
            //forcing compiler to convert to integer if conversion fails not run at compile time
            case 4:
                exit(0);
            default:
            std::cout<<"please try again\n";
        }

    }
}
int main(){
  SwitchMenu();
}