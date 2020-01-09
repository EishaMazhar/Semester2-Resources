#include<iostream>
using namespace std;
int count_digits(int b)
{
	static int count=0;
	if(b!=0)
	{
		count++;
		b=b/10;
		count_digits(b);             //     recursive call
	}
	else
	return count;
}
main()
{
	int a;
	cout<<"                ** program to count digits in number ** \n\n";
	cout<<"Enter a number : ";
	cin>>a;
	int b=count_digits(a);
	cout<<"\nThe number of digits are : "<<b<<endl;
}
