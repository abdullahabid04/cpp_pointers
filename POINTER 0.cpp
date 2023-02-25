#include<iostream>
using namespace std;

int main()
{
	int x;
	int *xptr;
	
	x = 5;
	xptr = &x;
	
	cout<<"The address of x is "<<&x<<endl;
	cout<<"The value of xptr is "<<xptr<<endl;
	cout<<"The value of x is "<<x<<endl;
	cout<<"The value of *xptr is "<<*xptr<<endl;
	cout<<"&*xptr = "<<&*xptr<<endl;
	cout<<"*&xptr = "<<*&xptr<<endl;
}
