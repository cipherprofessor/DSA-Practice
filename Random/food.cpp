

#include <iostream>
using namespace std;

int main()
{

  // Storing list of foods in string type array "fmenu"
  string fmenu[25] =
  {

    "Burger",
    "Coke",
    "Coffee",
    "Chicken Wings",
    "Chicken Nuggets",
    "French Fries",
    "Faludha",
    "Ice Cream",
    "Pizza",
    "Shawarma"

  };

  // Storing prices of foods in integer type array "price"
  int price[25] =
  {

    299,
    40,
    99,
    249,
    149,
    80,
    150,
    100,
    499,
    149

  };

  // Storing payment methods in string type array "payment"
  string payment[25] =
  {

    "Bkash",
    "Rocket",
    "Nagad",
    "UPay"

  };

  int order, quantity, cpayment;
  string name, contact, delivery, paymentnum, transid;

  cout << "\t\t\tSNACK BAR\n\n" << endl;
  cout << "Our Mouth-Watering Food Menu - \n" << endl;

  for (int i = 0; i < 10; i++)
  {

    // Showing food menu to customer
    cout << i + 1 << ". " << fmenu[i] << endl;

  }

  cout << "\nSelect the food you want to order : ";

  // Taking order from customer
  cin >> order;

  cout << "\nYou have selected " << fmenu[order - 1] << endl;

  cout << "\nEnter Quantity : ";

  // Taking quantity of food
  cin >> quantity;

  cout << "\n\n\t\t\tDELIVERY DETAILS\n\n";

  // Taking delivery details from customer
  cout << "Enter Your Name : ";
  cin >> name;
  cout << "Enter Contact Number : ";
  cin >> contact;
  cout << "Enter Delivery Address : ";
  cin >> delivery;

  cout << "\n\n\t\t\tYOUR BILL\n\n";

  //Storing the total amount into the integer type variable "total"
  int total = price[order - 1] * quantity;

  // Showing bill with customer details
  cout << fmenu[order - 1] << " * " << quantity << "\t\t\t" << price[order - 1] << " * " << quantity << endl;
  cout << "\n------------------------------------------------------------\n";
  cout << "Total" << "\t\t - \t\t" << total << " TK\n" << endl;
  cout << name << endl;
  cout << contact << endl;
  cout << delivery << endl;

  cout << "\n\n\t\t\tPAYMENT INFORMATION\n\n";
  cout << "We Accept - \n\n";

  for (int i = 0; i < 4; i++)
  {

    // Showing payment options to customer
    cout << i + 1 << ". " << payment[i] << endl;

  }

  cout << "\nSelect your desired payment method : ";

  // Taking input from customer
  cin >> cpayment;

  // Taking payment number from customer
  cout << "\nEnter Your " << payment[cpayment - 1] << " Number : " << endl;
  cin >> paymentnum;

  // Taking transaction id from customer
  cout << "Enter Your Transaction ID : " << endl;
  cin >> transid;

  if (cpayment == 1 && total > 249)
  {

    // Customers will get discount when orders more than 249TK using Bkash
    cout << "\nYou are eligible for Bkash 25% cashback" << endl;
    cout << "\nCongratulations! You have received " << total * 25 / 100 << "TK as cashback from SNACK BAR" << endl;

  }

  else if (total > 666)
  {

    // Customers will get discount when orders more than 666TK
    cout << "\nYou are eligible for HALLOWEEN-666 cashback offer" << endl;
    cout << "\nCongratulations! You have received " << total * 6 / 100 << "TK as cashback from SNACK BAR" << endl;

  }

  cout << "\nThank you for choosing us. \nENJOY YOUR SNACK! :)\n";

  return 0;
}


