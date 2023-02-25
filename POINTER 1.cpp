#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void cube(int *num)
{
	*num = *num * *num * *num;
}
int main()
{
	srand(time(0));
	
	int number = rand()%100;
	cout<<"Number : "<<number<<endl;
	cube(&number);
	cout<<"Cube of number : "<<number;
}
