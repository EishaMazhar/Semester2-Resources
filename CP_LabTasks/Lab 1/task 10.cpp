#include<iostream>
using namespace std;

main()
{
	int a,rem=0,sum=0,n=0,r=0,s;
	cout<<"enter a number : ";
	cin>>a;
	
	while(a!=0)            //this loop will reverse the digit 
	{
		rem=a%10;
		sum=sum*10+(rem);
		a=a/10;
	}
    cout<<"\nAfter unit increment in each digit : \n\n";
	while(sum!=0)         //this loop will reverse to original form along with increment
	{
		r=sum%10;
		n=n*10+(r+1);
		sum=sum/10;
	}
	cout<<n;
}
