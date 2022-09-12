#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    string main_items[3]={

    "Espresso"
    "Capuccino"
    "Latte"
    };

    int price[3] =
  {

    100,
    150,
    90

  };

        
    /* string add_ons[3]{
        
    // "milk"
    // "cream"
    // "Latte"
    // ; */
    
    cout<<"We Welcome You Here At Heaven's Coffe"<<endl;
    // cout<<"Please Choose From The Menu Below"<<endl;
    // cout<<"\n1.Espresso";
    // cout<<"\n2.Cappuccino";
    // cout<<"\n3.Latte";

    int order, quantity;

    for (int i = 0; i < 3; i++)
  {

    // Showing food menu to customer
    cout << i + 1 << ". " << main_items[i] << endl;

  }

  cout << "\nSelect the food you want to order : ";

  // Taking order from customer
  cin >> order;

  cout << "\nYou have selected " << main_items[order - 1] << endl;

  cout << "\nEnter Quantity : ";

  // Taking quantity of food
  cin >> quantity;

  //Storing the total amount into the integer type variable "total"
  int total = price[order - 1] * quantity;

   // Showing bill with customer details
  cout << main_items[order - 1] << " * " << quantity << "\t\t\t" << price[order - 1] << " * " << quantity << endl;
  cout << "\n------------------------------------------------------------\n";
  cout << "Total" << "\t\t - \t\t" << total << " TK\n" << endl;

cout << "\nThank you for choosing us. \nENJOY YOUR COFFEE :)\n";

  return 0;





}

    