#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int i;
	int sum=0 , avg=0;
	cout<<"Enter array elements"<<endl;
	for( i=0;i<=9;i++){
		cin>>arr[i];
		sum=sum+arr[i];
	}
	cout<<"Array elements are:"<<endl;
	for( i=0;i<=9;i++){
		cout<<arr[i];
		
	}
	cout<<endl;
	cout<<"sum of all elements "<<sum;
	cout<<endl;
	avg=sum/10;
	cout<<"average is:"<<avg <<endl;
	cout<<endl;
	
}

