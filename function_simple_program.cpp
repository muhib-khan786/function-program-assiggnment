#include <iostream>
using namespace std;

int sum(int a , int b);
int diff(int a , int b);
int mul(int a , int b);
float div(float a , float b);
int mod(int a ,int b);

int main ()
{
	int a,b,add,add1,add2,add3,add4;
	
	cout<<"Enter first no"<<endl;
	cin>>a;
	cout<<"Enter second no"<<endl;
	cin>>b;
add =	sum (a,b);
add1=	diff (a,b);
add2=	mul (a,b);
add3=	div (a,b);
add4=	mod (a,b);
cout<<"sum is"<<add<<endl;
cout<<"diff is"<<add1<<endl;
cout<<"mul is"<<add2<<endl;
cout<<"div is"<<add3<<endl;
cout<<"mod is"<<add4<<endl;
}
int sum(int a, int b)
{
	return a+b;
}
//difference
int diff(int a, int b)
{
     return a-b;
}
//multiplication
int mul(int a, int b)
{
	return a*b;
}
//divide
float div(float a, float b)
{
	return a/b;
}
//remainder
int mod(int a, int b )
{
	return a%b;
}
