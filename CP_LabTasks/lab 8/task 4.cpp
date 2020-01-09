#include<iostream>
using namespace std;
class PhoneCall
{
	private:
		string phoneNo;
		float ratePerMin;
		float CallDurationMins;
	public:
		bool operator==(const PhoneCall &p)const
		{
			return phoneNo==p.phoneNo;
		}
		friend ostream & operator<<(ostream &f,const PhoneCall &n ); 
   		friend istream & operator>>(istream &f,PhoneCall &n ); 
	
};

 ostream & operator<<( ostream &f, const PhoneCall &n )
 { 
    f<<"Phone number: "<< n.phoneNo<<", Duration: "<<n.CallDurationMins<<" minutes, Rate: "<<n.ratePerMin<< endl; 
 		return f; 
 } 
 
 istream & operator>>( istream &f, PhoneCall &n )
 { 
	f>>n.phoneNo; 
	f>>n.CallDurationMins; 
	f>>n.ratePerMin; 
		return f;
 }
main()
{
    PhoneCall PC[10];
    int i=0,j=0;
	cout<<"Enter the :\n10 phone numbers,duration in minuites,and rate per minuite\nseperate each with space and hit enter to place a new call\n";
	for(i=0;i<10;)
	{
		cin>>PC[i];
		for(j=0;j<i;++j)
		{
			if(PC[i]==PC[j])
			{
				cout<<"Duplicate number.Information Ignored!\n";
				break;
			}
		}
		if(i==j)
			{
				++i;	
			}
	}
	cout<<endl;
	for(i=0;i<10;i++){
		cout<<i<<endl;
		cout<<PC[i];
	}
}
