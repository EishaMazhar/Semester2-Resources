#include<iostream>
using namespace std;
main()
{
	int x=2,n;
	cout<<"enter the number of terms you want to display : ";
	cin>>n;
	cout<<x<<" ";
	for(int i=0;i<n-1;i++)
	{
		x=(x*2);
		x=x+2;
		cout<<x<<" ";
	}
}
