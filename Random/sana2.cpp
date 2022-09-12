#include<iostream>
using namespace std;

class main_foods{
    public:
    string name;
    int price;
    int quantity;
};


int main(){

    int quantity;
    cin>>quantity;

    main_foods drink1;
    drink1.name='Espresso';
    drink1.price=60;
    drink1.quantity=quantity;

    main_foods drink2;
    drink2.name='Cappuccino';
    drink2.price=75;
    drink2.quantity=quantity;

    main_foods drink3;
    drink3.name='Latte';
    drink3.price=100;
    drink3.quantity=quantity;



return 0;
}