#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,num,den;
	char ch;
	
	cout<<"enter first fraction : ";
	cin>>a>>ch>>b;
	
	cout<<"enter second fraction : ";
	cin>>c>>ch>>d;
	
    num=(a*d)+(b*c);
    den=(b*d);
    
	cout<<endl<<"the sum is : "<<num<<"/"<<den<<endl;
}
