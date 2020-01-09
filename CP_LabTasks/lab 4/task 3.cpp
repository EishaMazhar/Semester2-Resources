#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class Distance{
	float feets;
	float inches;
	float meters;
	public:
		Distance(float m){
			feets=0;
			inches=0;
			meters=m;
			inches=m*39.3701;
			feets=m*3.2808;
		}
		displayInMeters(){
			cout<<"Distance in meters is : "<<fixed<<setprecision(3)<<meters<<endl;
			
		}
		displayInFeet(){
			cout<<"Distance in feets is : "<<fixed<<setprecision(3)<<feets<<endl;
		}
		displayInInches(){
			cout<<"Distance in inches is : "<<fixed<<setprecision(3)<<inches<<endl;
		}
};
main()
{
	float m;
	cout<<"Enter the distance in meters : ";
	cin>>m;
	Distance d(m);
	cout<<"\nThe distances are : \n\n";
	d.displayInMeters();
	d.displayInFeet();
	d.displayInInches();
}
