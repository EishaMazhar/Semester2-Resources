#include<iostream>
using namespace std;
reverse(int *a,int n)
{
	int i,b[n],j;
	for(i=n-1,j=0;i>=0,j<n;i--,j++)
	{
		b[j]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	
}
main()
{
	int n;
	cout<<"        ** Program to reverse an array ** \n\n";
	cout<<"Enter the no of elements : ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of array : \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	reverse(a,n);
	cout<<"Reversed array would be : \n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
