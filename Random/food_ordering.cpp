#include <iostream>
using namespace std;

int main()
{

  // Storing list of coffees in string type array "fmenu"
  string fmenu[3] =
  {

    "Espresso",
    "Cappuccino",
    "Latte",
    

  };

  // Storing prices of coffees in integer type array "price"
  int price[3] =
  {

    100,
    150,
    90

  };

  // Storing add_on methods in string type array "add_on"
  string add_on[3] =
  {

    "milk",
    "cream",
    "latte"

  };

  int order, quantity, cadd_on;
 

  cout << "\t\t\t Heaven Coffe Shop\n\n" << endl;
  cout << "Our Mouth-Watering Coffee Menu - \n" << endl;

  for (int i = 0; i < 10; i++)
  {

    // Showing coffee menu to customer
    cout << i + 1 << ". " << fmenu[i] << endl;

  }

  cout << "\nSelect the  you want to order : ";

  // Taking order from customer
  cin >> order;

  cout << "\nYou have selected " << fmenu[order - 1] << endl;

  cout << "\nEnter Quantity : ";

  // Taking quantity of coffee
  cin >> quantity;

  

  

  //Storing the total amount into the integer type variable "total"
  int total = price[order - 1] * quantity;

  // Showing bill with customer details
  cout << fmenu[order - 1] << " * " << quantity << "\t\t\t" << price[order - 1] << " * " << quantity << endl;
  cout << "\n------------------------------------------------------------\n";
  cout << "Total" << "\t\t - \t\t" << total << " TK\n" << endl;
  

  cout << "\n\n\t\t\tPAYMENT INFORMATION\n\n";
  cout << "We Accept - \n\n";

  for (int i = 0; i < 4; i++)
  {

    // Showing add_on options to customer
    cout << i + 1 << ". " << add_on[i] << endl;

  }

  cout << "\nSelect your desired add_on method : ";

  // Taking input from customer
  cin >> cadd_on;

  // Taking add_on number from customer
  cout << "\nEnter Your " << add_on[cadd_on - 1] << " Number : " << endl;
  cin >> cadd_on;



  cout << "\nThank you for choosing us. \nENJOY YOUR SNACK! :)\n";

  return 0;
}


