#include<iostream>
using namespace std;
class ship
{
		int ship_no;
		float latitude;
		float longitude;
	public:
		ship(int n,float lat,float lg):ship_no(n),latitude(lat),longitude(lg)
		{
			
		}
		Display()
		{
			cout<<"Ship no : "<<ship_no<<endl;
			cout<<"ship Location : "<<"\nlatitude : "<<latitude<<"\nlongitude"<<longitude;
		}
};
main()
{
	int n1,n2,n3;
	float lg1,lg2,lg3,lt1,lt2,lt3;
	cout<<"Enter details for 1st ship : \n";
	cout<<"ship no : ";
	cin>>n1;
	cout<<"For Location : \nLongitude : ";
	cin>>lg1;
	cout<<"Latitude : ";
	cin>>lt1;
	cout<<"\n\nEnter details for 2nd ship : \n";
	cout<<"ship no : ";
	cin>>n2;
	cout<<"For Location : \nLongitude : ";
	cin>>lg2;
	cout<<"Latitude : ";
	cin>>lt2;
	cout<<"\n\nEnter details for 3rd ship : \n";
	cout<<"ship no : ";
	cin>>n3;
	cout<<"For Location : \nLongitude : ";
	cin>>lg3;
	cout<<"Latitude : ";
	cin>>lt3;
	ship s1(n1,lt1,lg1),s2(n2,lt2,lg2),s3(n3,lt3,lg3);
	cout<<"\nShip 1 details are : \n";
	s1.Display();
	cout<<"\nShip 2 details are : \n";
	s2.Display();
	cout<<"\nShip 3 details are : \n";
	s3.Display();
}
