#include<iostream>
using namespace std;
perfect_square(int num)
{
	int a;
	for(a=1;a<=num;a++)
	{
		if(num==a*a)
		{
			cout<<num<<" ";
		}
	}
	
}
main()
{
	int num1,num2,i;
	cout<<"Input minimum range number : ";
	cin>>num1;
	cout<<"Input maximum range number : ";
	cin>>num2;
	for(i=num1;i<=num2;i++)
	{
		perfect_square(i);
	}
}
