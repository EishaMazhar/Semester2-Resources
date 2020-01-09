#include<iostream>
using namespace std;

class employee{
	char* employee_name=new char;
	const int employee_id;
	public:
		employee(int id,char *(&name)):employee_id(id)
		{
			employee_name=name;
		}
		display(){
			cout<<"Employee :\n";
			cout<<"ID : "<<employee_id<<endl<<"Name : "<<employee_name<<endl;
		}
};

main()
{

	int x=123;
	cout<<"Enter the name : ";
   	char* name=new char;
   	cin>>name;	
   	employee e1(x++,name);
   		
	cout<<"\nEnter the name : ";
	cin>>name;	
	employee e2(x++,name);
		
	cout<<"\nEnter the name : ";
	cin>>name;	
	employee e3(x++,name);
	
	e1.display();
	e2.display();
	e3.display();



}
