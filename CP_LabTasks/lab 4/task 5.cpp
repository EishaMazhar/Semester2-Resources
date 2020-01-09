#include<iostream>
using namespace std;
class student{
	string name;
	int semester;
	int ID;
	char sec;
	public:
		student(string name,int semester,int ID,char sec)
		{
			(*this).name=name;
			(*this).semester=semester;
			(*this).ID=ID;
			(*this).sec=sec;
		}
		student(){}
		display()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Semester : "<<semester<<endl;
			cout<<"ID : "<<ID<<endl;
			cout<<"Section : "<<sec<<endl;
		}
		
};
main(){
	
	string s;
	int a,b;
	char c;
	cout<<"Enter name : ";
	cin>>s;
	cout<<"Enter semester : ";
	cin>>a;
	cout<<"Enter ID : ";
	cin>>b;
	cout<<"Enter section : ";
	cin>>c;
	cout<<"\n        ** Student data is : ** \n\n";
	student eisha(s,a,b,c);
	eisha.display();
}
