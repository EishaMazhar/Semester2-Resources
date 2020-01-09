#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Calculator{
	private:
		
		float rentPerDay;
    	string Customer_name;
    	int NoOfdays;
    	float CustomerRent;
	
	public:
		Calculator(){}
		Calculator(string s,int n)
		{
			Customer_name=s;
			NoOfdays=n;
			rentPerDay=1000.85;
			CustomerRent=(float)NoOfdays*rentPerDay;	
		}
		float RentwithBonus()
		{
			if(NoOfdays>7){
				CustomerRent=(float)CustomerRent-rentPerDay;
				return CustomerRent;
			}
			else if(NoOfdays<=7)
			{
				return CustomerRent;
			}
		}
		DisplayRent()
		{
			cout<<"\nCustomer Name : "<<Customer_name;
			cout<<"\nNo of Days : "<<NoOfdays;
			cout<<"\nTotal Rent After bonus(if applicable) : "<<fixed<<setprecision(2)<<RentwithBonus();
		}	
};

main()
{
	cout<<"          ** Hotel Mercato **\n";
	string n1,n2;
	int d1,d2;
	cout<<"Enter name : ";
	cin>>n1;
	cout<<"Days : ";
	cin>>d1;
	Calculator C1(n1,d1);

	cout<<"Enter name : ";
	cin>>n2;
	cout<<"Days : ";
	cin>>d2;
	Calculator C2(n2,d2);

	C1.DisplayRent();
	cout<<endl;
	C2.DisplayRent();

}
