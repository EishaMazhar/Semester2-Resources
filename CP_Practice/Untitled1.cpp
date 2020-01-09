#include<iostream>
using namespace std;
class Person{
		string name;
		int age;
	public:
		Person(string n,int a):name(n),age(a)
		{
			
		}
	int gA(){
		return age;
	}
};
class Faculty:virtual public Person
{
		string type;
	public:
		Faculty(string t,string n,int a):type(t),Person(n,a)
		{
			
		}
};
class Student:virtual public Person{
		string ID;
	public:
		Student(string id,string n,int a):ID(id),Person(n,a)
		{
			
		}
	string gID(){
		return ID;
	}
};
class TA:Student,Faculty
{
	
	public:
		TA(string n,string i,string t,int a):Faculty(t,n,a),Student(i,n,a),Person(n,a)
		{
			cout<<gID()<<endl;
		}
	friend int & operator +(TA &e,TA &a);
		
};
int & operator +(TA &e,TA &a){
	int  x=e.gA()+a.gA();
	return x;
}
main()
{
	TA eisha("Eisha","17k-3730","guest type",19);
	TA aisha("Aisha","17k-3818","home faculty",19);
	cout<<eisha+aisha;
}
