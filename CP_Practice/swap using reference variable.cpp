#include<iostream>
using namespace std;
swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
main()
{
	int a,b;
	cout<<"enter a : ";
	cin>>a;
	cout<<"enter b : ";
	cin>>b;
	swap(a,b);
	cout<<"\nAfter swapping :\n";
	cout<<"a is : "<<a<<endl;
	cout<<"b is : "<<b;
}
