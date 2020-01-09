#include<iostream>
using namespace std;
class captain
{
	protected:
		string name;
		string ID;
		float fuel;
	public:
		captain(){
		}
		captain(string n,string id)
		{
			fuel=0;
			name=n;
			ID=id;
			
		}
		setFuel(float f)
		{
			fuel=f;
		}
	
		string GetName()
		{
			return name;
		}
		string GetID()
		{
			return ID;
		}
	
};
class passenger:public captain
{
	int i,j,k;
	string no,pickup,doff;
	float km,rent;
	char pkg;
	public:
		passenger()
		{
		}
		passenger(string n,string id):captain(n,id)
		{
			cout<<"\nEnter details for passenger :\n";
			cout<<"Enter cell no : ";
			cin>>no;
			cout<<"Enter pick up : ";
			cin>>pickup;
			cout<<"Enter drop off : ";
			cin>>doff;
			cout<<"Enter KMs : ";
			cin>>km;
			cout<<"Choose package : \n'g' for gold\n'p'for platinum\n's' for silver\n";
			cin>>pkg;
			if(pkg=='p')
			{
				rent=km*120;
				fuel=fuel-(km*3);
				i++;
			
			}
			else if(pkg=='g')
			{
				rent=rent*110;
				fuel=fuel-(km*3);
				j++;
			}
			else if(pkg=='s')
			{
				rent=rent*100;
				fuel=fuel-(km*3);
				k++;
			}
		}
		int CheckFuel(float f){
			if(f<=0)
			{
				cout<<"Out of fuel";
				return 1;
			}
			else
			{
				return 0;
			}
		}
		float GetFuel()
		{
			return fuel;
		}
		string GetNo()
		{
			return no;
		}
		string GetPickup()
		{
			return pickup;
		}
		string GetDropOff()
		{
			return 	doff;	
		}
		Display(){
			cout<<"Captain name : "<<GetName()<<endl;
		    cout<<"ID of Captain : "<<GetID()<<endl;
		    cout<<"\nDetails of passenger : \n";
		    cout<<
		}
};

main()
{
	string name,ID;
	float f;
	cout<<"             Welcome to uber !\n";
	cout<<"Enter name of captain : ";
	cin>>name;
	cout<<"Enter ID : ";
	cin>>ID;
	captain eisha;
	cout<<"Assign the fuel (Litres) to the captain : ";
	cin>>f;
	eisha.setFuel(f);
	passenger p(name,ID);
	p.Display();
	
	
}
