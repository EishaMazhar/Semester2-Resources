#include<iostream>
#include<string.h>
using namespace std;

class Vehicle{
	private:
		
	int year;
	int Speed;
	string manufacturer;
	public :
	Vehicle(){
		
		}
 void setdetails(int y , int s , string m)
    {
   	     year = y;
   	     manufacturer = m;
   	     Speed = s;
   	}
  int speeding()
  {
  	return Speed;
				 }	
  int accelerate( int s)
  { int a;
  	a = s+5;
  	return a;
							  }	
  int brake(int s)
  {
  	 int a;
  	 a = s-5;
		return a;						}							  
							  
   							  			    		
};

main()
{
	
	Vehicle Bike , Rickshaw;
	
	int i ,s,y,x,W;
	string m;
	 cout<<"Enter the wheels of the vehicle:";
	 cin>>W;
	 if(W==2)
	 {
	 cout<<"Enter Bike's Model's year :";
	 cin>>y;
	 cout<<"Enter Manufacturer name of the bike:";
	 cin>>m;
	 cout<<"Enter Speed of the Bike :";
	 cin>>s;
	Bike.setdetails(y,s,m);
	x= Bike.speeding();
   for(i=0;i<5;i++)
   {   
   	    x = Bike.accelerate(x);
       cout<<"\nAccelerating the Bike , the current speed of Bike after "<<i+1<<" time is "<<x;    	
   	}
	for(i=0;i<2;i++)
   {
   	   x = Bike.brake(x);
       cout<<"\nBraking the Bike ,the current speed of Bike after "<<i+1<<" time is "<<x;    	
   	
   	
	   } }
	   else if(W==3)
	   {
	   	
	   		cout<<"Enter Rickshaw Model's year :";
	 cin>>y;
	 cout<<"Enter Manufacturer name of the Rickshaw:";
	 cin>>m;
	 cout<<"Enter Speed of the Rickshaw :";
	 cin>>s;
	Rickshaw.setdetails(y,s,m);
	x= Rickshaw.speeding();
	cout<<"\nAccelerating the Rickshaw :\n ";
   for(i=0;i<5;i++)
   {   
   	    x = Rickshaw.accelerate(x);
       cout<<"\nthe current speed  after "<<i+1<<" time is "<<x;    	
   	}
   	cout<<"\nApplying Brakes :\np
	for(i=0;i<2;i++)
   {
   	   x = Rickshaw.brake(x);
       cout<<"\nthe current speed after "<<i+1<<" time is "<<x;    	
   	
   	
	   }
			 }  	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

















