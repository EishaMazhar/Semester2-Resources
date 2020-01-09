#include<iostream>
using namespace std;
class Location
{
	int longitude,latitude;
	public:
		Location()
		{
			longitude=0;
			latitude=0;
		}
		Location(int lng,int lat):longitude(lng),latitude(lat)
		{
			
		}
		int get_long()
		{
			return longitude;
		}
		int get_lat()
		{
			return latitude;
		}
		Display(){
			cout<<"\nlongitude : "<<longitude;
			cout<<"\nlatitude : "<<latitude<<endl;
		}	
		friend Location operator++(Location &i);
		operator++(int){
			longitude+=1;
			latitude++;
		}
		friend Location operator+(Location &l,int i);
		friend Location operator+(int i,Location &l);
		friend Location operator+(Location &l1,Location &l2);
};
class Details:Location{
	string address;
	public:
		Details(){
			address="ABC";
		}
		Details(string ad):address(ad){
			
		}
		Display(){
			Location::Display();
			cout<<"Address : "<<address;
		}	
};

 Location operator+(Location &l1,Location &l2){
 		Location l;
 		l.latitude=l1.latitude+l2.latitude;
		l.longitude=l1.longitude+l2.longitude;
		return l;
 }
Location operator++(Location &i){
	++(i.latitude);
	++(i.longitude);
}
Location operator+(Location &l,int i)
{
	l.longitude=l.longitude+i;
	l.latitude=l.latitude+i;

}
Location operator+(int i,Location &l){

	l.longitude=l.longitude+i;
	l.latitude=l.latitude+i;
	
}
int main()
{
	Location e1(10,20),e2(5,30),e3(90,90);
	cout<<"Instance 1 :\n";
	e1.Display();
	cout<<"\nInstance 2 :\n";
	e2.Display();
	cout<<"\nInstance 3 :\n";
	e3.Display();
	++e1;
	cout<<"\nObj 1 after pre-increment : ";
	e1.Display();
	e1++;
	cout<<"\nObj 1 after post-increment : ";
	e1.Display();
	cout<<"after assigning obj 1 to obj 2 : ";
	e2=e1;
	e2.Display();
	cout<<"\nAdding 10 on right :";
	e1+10;
	e2=e1;
	e2.Display();
	cout<<"\nAdding 10 on left :";
	10+e1;
	e2=e1;
	e2.Display();
	e3=e2+e1;
	e3.Display();
	Details *ptr,d;
	ptr=&d;
	ptr->Display();
	return 0;
}
