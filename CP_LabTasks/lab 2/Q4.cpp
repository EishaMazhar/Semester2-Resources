#include<iostream>
using namespace std;
int is_prime(int n)
{
	int i,flag=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		flag=1;
		break;
		}
	}
	if(flag==0)
	return n;
}
main()
{
	int num,n;
	for(n=2;n<=100;n++)
	{
		if(is_prime(n)!=0)
		cout<<is_prime(n)<<" ";
	}
}
