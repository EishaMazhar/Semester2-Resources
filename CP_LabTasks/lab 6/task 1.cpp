#include<iostream>
using namespace std;
class Person
{
	int age;
	protected:
    	string name;
    public:
    	Person(int a,string n):age(a),name(n)
		{
		}  
	    int getage(){
	    	return age;
		}
};
class Employee
{
	string empId;
	
	protected:
		int salary;
		public:
		Employee(int s,string Id):salary(s),empId(Id)
		{
		}
		string getId(){
			return empId;
		}
	
};
class Manager:public Person,public Employee
{
	string type;
	public:
		Manager(int a,string n,string Id,int s,string t):type(t),Employee(s,Id),Person(a,n)
		{
		}
		string gettype(){
			return type;
		}
};
class IT_Manager:public Manager
{
	int noOfPersons;
	
	public :
		IT_Manager(int ag,string nm,string ID,int sal,string typ,int no):Manager(ag,nm,ID,sal,typ),noOfPersons(no)
		{
		}
		void display()
		{
	       cout<<"Name : "<<name<<endl;
		   cout<<"Age : "<<getage()<<endl;
		   cout<<"ID : "<<getId();
		   cout<<"\nSalary : "<<salary;
		   cout<<"\nNo of person : "<<noOfPersons;
		   
		}
		
};
main()
{
	IT_Manager eisha(18,"Eisha","17k-3730",40000,"IT Manager",1);
	eisha.display();
}
