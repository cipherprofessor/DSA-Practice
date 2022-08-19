#include <iostream>
using namespace std;


static void fun1()
{
	cout<<"Name "<<endl;
}

static void fun2()
{
	cout<<"Mohsin"<<endl;

	fun1();

	cout<<"Athar"<<endl;
}
	
	
int main() {
	
	cout<<"Manzoor"<<endl;

	fun2();

	cout<<"Unjum"<<endl;
}