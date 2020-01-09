#include<iostream>
using namespace std;
int hms_to_sec(int a,int b,int c)
{
	int s;
	return s=(a*3600)+(b*60)+(c);
}
main()
{
	int sec;
	int a,b,c,i=0;
	cout<<"Enter the time in hh:mm:ss : \nTime in hours: ";
	cin>>a;
	cout<<"Time in min : ";
	cin>>b;
	cout<<"Time in sec : ";
	cin>>c;
	cout<<"Time is : < "<<a<<" : "<<b<<" : "<<c<<" >";
	cout<<"\nTime in seconds is : "<<(hms_to_sec(a,b,c));

	
}
