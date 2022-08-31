
#include <iostream>
using namespace std;


char largest_alphabet(char a[], int n)
{
	
	char max = 'A';

	
	for (int i=0; i<n; i++)
		if (a[i] > max)
			max = a[i];

	
	return max;
}

char smallest_alphabet(char a[], int n)
{
	
	char min = 'z';

	
	for (int i=0; i<n-1; i++)
		if (a[i] < min)
			min = a[i];

	return min;
}


int main()
{
	
	char a[]= "GeEksforGeeks";

	
	int size = sizeof(a) / sizeof(a[0]);

	cout << "Largest and smallest alphabet is : ";

	cout << largest_alphabet(a,size)<< " and ";
	cout << smallest_alphabet(a,size)<<endl;
	return 0;
}
