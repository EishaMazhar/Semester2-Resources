#include<iostream>
using namespace std;
main()
{
	int n,x,y;
	
	cout<<"enter n : ";
	cin>>n;
	cout<<"\nenter x : ";
	cin>>x;
	cout<<"\nenter y : ";
	cin>>y;
	cout<<endl;
	if(n>0)
	{
		cout<<"since n>0 so the function is F=x+y w.r.t condition\n\n";
		cout<<"the result is : "<<x+y;
	}
	else
	{
		cout<<"since n<=0 so the function is F=x-y w.r.t condition\n";
		cout<<"\nthe result is : "<<x-y;
	}
	
}
