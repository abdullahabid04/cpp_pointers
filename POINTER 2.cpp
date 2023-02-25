#include<iostream>

using namespace std;

int add(int *,int *);
int sub(int *,int *);
int mul(int *,int *);
int div(int *,int *);
int rem(int *,int *);

int main()
{
	int a=10,b=3;
	int *aptr = &a,*bptr = &b;
	cout<<add(&a,&b)<<endl;
	cout<<sub(&a,&b)<<endl;
	cout<<mul(&a,&b)<<endl;
	cout<<div(&a,&b)<<endl;
	cout<<rem(&a,&b)<<endl;
}

int add(int *aptr,int *bptr)
{
	return  *aptr + *bptr;
}
int sub(int *aptr,int *bptr)
{
	return  *aptr - *bptr;
}
int mul(int *aptr,int *bptr)
{
	return  *aptr * *bptr;
}
int div(int *aptr,int *bptr)
{
	return  *aptr / *bptr;
}
int rem(int *aptr,int *bptr)
{
	return  *aptr % *bptr;
}
