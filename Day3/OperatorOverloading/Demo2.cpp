#include <iostream>

class Complex{
private:
    float _real; 
    float _imag;

public: 
    Complex(float real,float imag)
        :_real(real),_imag(imag){

        }
        ~Complex(){
            std::cout<<"object destroyed\n";
        }

        Complex operator+(Complex n2){
            float r = this->_real+ n2._real;
            float i = this->_imag+ n2._imag;
            Complex temp(r,i);
            return temp;
         }
         //c1 +c2 //c1.operator+(c2)
         //c1<<c2; c1.operator <<(c2);
         //actual :std::cout<<c1;

         //friend function is a function that is not a member function of the class
         //but still has access to private attributes of class  
         //it breaks rule of encapsulation 
        
        
        friend std::ostream &operator<<(std::ostream &os, const Complex &rhs) {
        
            os << "_real: " << rhs._real
        
               << " _imag: " << rhs._imag;
        
            return os;
        
        }
};