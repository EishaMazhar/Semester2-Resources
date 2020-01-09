#include<iostream>
using namespace std;
void swap(float a,float b)
{
	float t=a;          //temporary variable for swaping
	a=b;
	b=t;
	cout<<"\na is : "<<a;
	cout<<"\nb is : "<<b;
}
main()
{
	float a,b;
	
	cout<<"enter a : ";
	cin>>a;
	
	cout<<"enter b : ";
	cin>>b;
	
	swap(a,b);         //function call
}
