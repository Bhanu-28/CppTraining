#include <iostream>

class Card{

private :
        int _cvv_number;
        int _card_number;
public :
    Card(int cvv,int cardNumber)
    :_cvv_number(cvv),_card_number(cardNumber){

    }
    ~Card(){
        std::cout<<"card with number "<<_card_number<<"is destroyed";
    }
    
};

class Account
{
private:
    /* data */

    Card* _obj;
    std::string _name;
public:
    Account(Card* obj, std::string name ) 
    :_obj(obj),_name(name){

    }
    ~Account() {
        std::cout<<"Account with name :"<<_name<<"is destroyed \n";
    }

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs) {
        os << "_obj: " << rhs._obj
           << " _name: " << rhs._name;
        return os;
    }
    
};

int main(){
    Account* a1 = new Account(new Card(123,420604),"Bhanu");
    std::cout<<*a1<<std::endl; 
}
