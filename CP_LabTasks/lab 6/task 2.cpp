#include<iostream>
using namespace std;
class employee{
	string name;
	int num;
	public:
		employee(string nm,int no):name(nm),num(no)
		{	
		}
		string getName()
		{
			return name;
		}
		int getNum()
		{
			return num;
		}
};
class manager:public employee{
	string title_m;
	int clubDues;
	public:
		manager(string n,int no,string ttl,int ds):employee(n,no),title_m(ttl),clubDues(ds){
		}
		string getTtl_M(){
			return title_m;
		}
		int getDues(){
			return clubDues;
		}
};
class scientist:public employee{
	string title_s;
	int publications;
	public :
		scientist(string n,int no,string ttl,int pb):title_s(ttl),publications(pb),employee(n,no)
		{		
		}
		string getTtl_S(){
			return title_s;
		}
};
class Laborer:public employee
{
	string title_L;
	
	public:
		
		Laborer(string nm,int no,string ttl):employee(nm,no),title_L(ttl)
		{
		}
		
		string getTtl_L()
		{
			return title_L;
		}
};
main()
{
	string n1,n2,n3,t1,t2,t3;
	int due,pub,no1,no2,no3;
	cout<<"     ** Employee database ** \nEnter data for scientist:\n";
	cout<<"Enter name : ";
	cin>>n1;
	cout<<"Enter no : ";
	cin>>no1;
	cout<<"Enter title : ";
	cin>>t1;
	cout<<"Enter no of publications : ";
	cin>>pub;
	scientist e1(n1,no1,t1,pub);
	cout<<"\nEnter details for manager : \n";
	cout<<"\nEnter name : ";
	cin>>n2;
	cout<<"Enter no : ";
	cin>>no2;
	cout<<"Enter title : ";
	cin>>t2;
	cout<<"Enter dues : ";
	cin>>due;
	manager m1(n2,no2,t2,due);
	cout<<"\nEnter details for laborer\nEnter name : ";
	cin>>n3;
	cout<<"Enter no : ";
	cin>>no3;
	cout<<"Enter title : ";
	cin>>t3;
	Laborer l1(n3,no3,t3);
	
cout<<"All Details are recorded in data base..Thank you !";
}
