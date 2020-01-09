#include<iostream>
#include<string.h>
using namespace std;
class employee{
	protected:
	string name;
	string code;
	public:
		employee(string nm,string cod):name(nm),code(cod)
		{
			
		}
	
};
class consultant:virtual public employee{
	protected:
	int yearsOfexperience;
	public:
		consultant(int ex, string s, string cd): yearsOfexperience(ex), employee(s,cd)
		{
			
		}
	
};
class manager:virtual public employee{
	protected:
	int noOfTeam;
	public:
		manager(int no, string s, string cd): noOfTeam(no), employee(s,cd)
		{
		}
	
};
class ConsultantManager:public consultant,public manager{
	public:
		ConsultantManager(string s,string cd,int exp,int no):manager(no,s,cd),consultant(exp,s,cd),employee(s,cd)
		{
			
		}
		void Display()
		{
			cout<<"Name : "<<name<<endl<<"Code : "<<code<<"\nYear(s) of experience : "<<yearsOfexperience<<"\nNo of team members : "<<noOfTeam<<endl;
		}
};
int main()
{
	ConsultantManager eisha("Eisha","S-123",17,5);
	eisha.Display();
	return 0;
}
