/*Create a class called Employee that includes three pieces of information as data members—a first name (type char*), a last name (type string) and a monthly salary (type int).
 Your class should have a setter function that initializes the three data members. Provide a getter function for each data member. If the monthly salary is not positive, set it to 0.
 Write a test program that demonstrates class Employee’s capabilities. Create two Employee objects and display each object’s yearly salary
. Then give each Employee a 10 percent raise and display each Employee’s yearly salary again.
 Identify and add any other related functions to achieve the said goal.*/
 
#include<iostream>
#include<string.h>
using namespace std;
class Employee{
	//char* First_name=new char[10];
	string First_name;
	string Last_name;
	int salary;
	int r,s,ten;
	public:
		Employee(){
			salary=0;
		}
	set_data(string f_name,string L_name,int sal)
	{
		
		First_name = f_name;
		Last_name=L_name;
		if(sal>=0)
	     	salary=sal;
	}
	string get_F_name()
	{
		return First_name;
	}
	string get_L_name()
	{
		return Last_name;
	}
	int get_salary()
	{
		return salary;
	}
	int yearly(){
		s=salary*12;
		return s;
	}
	int Raised(){
		ten=(0.1)*(s),r;
		r=s+ten;
		return r;
	}
	
};
main()
{
	Employee eisha[2],eisha2;
	int sal,ySal;
	string f_name;
	string L_name;
	for(int i=0;i<2;i++)
	{
    	cout<<"Enter the first name :";
      	cin>>f_name;
    	cout<<"Enter the last name :";
    	cin>>L_name;
    	cout<<"Enter the salary :";
    	cin>>sal;
    	eisha[i].set_data(f_name,L_name,sal);
    	cout<<"Yearly salary is : "<<eisha[i].yearly()<<endl;
    	cout<<"Raised salary would be : "<<eisha[i].Raised();
    	cout<<endl<<endl;
	}
	
}
