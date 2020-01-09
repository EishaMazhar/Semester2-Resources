#include<iostream>
using namespace std;
read_parameters(int *l,int *b)
{
	cout<<"Length : ";
	cin>>*l;
	cout<<"Breadth: ";
	cin>>*b;
}
int Area(int l,int b)
{
	int area=l*b;
	return area;
}
int Parameter(int l,int b)
{
	int para=2*(l+b);
	return para;
}
main()
{
	int length=0,breadth=0;
	read_parameters(&length,&breadth);
	int a=Area(length,breadth);
	int p=Parameter(length,breadth);
	cout<<"\nArea is  "<<a;
	cout<<"\nParameter is  "<<p;
}
