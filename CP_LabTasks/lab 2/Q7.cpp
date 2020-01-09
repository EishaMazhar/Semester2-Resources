#include<iostream>
using namespace std;
reverse(int i)
{
	int r=0;
	if(i!=0)
	{
		r=i%10;
    	cout<<r;
	    i=i/10;
	    reverse(i);
	}
}
main()
{
	int i;
    cout<<"Number : ";
	cin>>i;
	reverse(i);
}
