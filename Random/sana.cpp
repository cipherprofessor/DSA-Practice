#include<iostream>

using namespace std;
int main()
{
	char name[30], Espresso1[]="Espresso With Milk" ,Espresso2[]="Espresso With Cream" ,Espresso3[]="Espresso With Latte" ;
	char Cappuccino1[]="Cappuccino With Milk",Cappuccino2[]="Cappuccino With Cream", Cappuccino3[]="Cappuccino With Latte";
	char Latte1[]="Latte With Milk", Latte2[]="Latte With Cream", Latte3[]="Latte With Latte",gotostart ;
	int choice=0,pchoice,pchoice1, quantity;// time=40;
	beginning:
	system("CLS");
	cout<<"\t\t\t----------WELCOME TO COFFEE HOUSE-----------\n\n";
	cout<<"Please Enter Your Name: ";
	cin.getline(name, 20);
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t--------Menu--------\n\n";

	cout<<"1) Espresso\n";
	cout<<"2) Cappuccino\n";
	cout<<"3) Latte\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1)
	 {
		cout<<"\n1) "<<Espresso1<<"\n";
		cout<<"2) "<<Espresso2<<"\n";
		cout<<"3) "<<Espresso3<<"\n";
		cout<<"\nPlease Enter which Flavour would you like to have?:";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=3)
		{
			cout<<"\n1) Espresso With Milk Rs.60\n"<<"2) Espresso With Cream Rs.75\n"<<"3) Espresso With Milk Rs.100\n";
			cout<<"\nChoose The Add on Please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 60*quantity;
			break;

			case 2: choice = 75*quantity;
			break;

			case 3: choice = 100*quantity;
			break;


			      }
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<Espresso1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be ready in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From  Coffee House \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<Espresso2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering from Coffee House\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<Espresso3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Coffee House\n";
			 break;
			 

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}



		}

	 }


	 else if(choice==2)
	 {
		cout<<"\n1 "<<Cappuccino1<<"\n";
		cout<<"2 "<<Cappuccino2<<"\n";
		cout<<"3 "<<Cappuccino3<<"\n";
		
		cout<<"\nPlease Enter which Cappuccino you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 80*quantity;
			break;

			case 2: choice = 90*quantity;
			break;

			case 3: choice = 125*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<Cappuccino1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Coffee House \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<Cappuccino2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be ready in 40 Minutes";
			 cout<<"\nThank you For Ordering From Coffee House \n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<Cappuccino3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be ready in 40 Minutes";
			 cout<<"\nThank you For Ordering From Coffee House \n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}

 }
}
	else if(choice==3)
	 {
		cout<<"\n1  "<<Latte1<<"Rs 100"<<"\n";
		cout<<"2  "<<Latte2<<"Rs 125"<<"\n";
		cout<<"3  "<<Latte3<<"Rs150"<<"\n";
		cout<<"\nPlease Enter which Latte you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 100*quantity;
			break;

			case 2: choice = 125*quantity;
			break;

			case 3: choice = 150*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<Latte1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be Ready in 40 Minutes";
			 cout<<"\nThank you For Ordering From Coffee House \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<Latte2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be Ready in 40 Minutes";
			 cout<<"\nThank you For Ordering From Coffee House \n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<Latte3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be Ready in 40 Minutes";
			 cout<<"\nThank you For Ordering From Coffee House \n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}
			else
			{
				system("CLS");
				cout<<"Please Select Right Option: \n";
				cout<<"Would You like to Start the program again? Y / N: " ;
				cin>>gotostart;

				if(gotostart=='Y' || gotostart=='y')
				{
				  goto beginning;
			  //return 0;
			}
			}

    
}