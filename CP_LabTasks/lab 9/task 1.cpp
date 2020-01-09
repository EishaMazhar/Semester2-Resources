
#include<iostream>
using namespace std;
class Person{
	private:
		string name;
		public:
			virtual void getdata()=0;
			virtual bool isoutstanding()=0;
			Person(string na){
				name=na;
			}
			void getname(){
				cout<<"Enter a name ";
				cin>>name;
			}
			void putname(){
				cout<<"Name is "<<name<<endl;
			}
			
};
class student:public Person{
		private :
			float gpa;
			public:
				student(string name,float a):Person(name){
					gpa=a;
				}
				void getdata(){
					cout<<"Enter your GPA ";
					cin>>gpa;
				}
				bool isoutstanding(){
					return(gpa>3.5);
				}
};
class professor:public Person{
	private:
		int publication;
		public:
			professor(int x,string name):Person(name){
				publication=x;
			}
			void getdata(){
				cout<<"Enter the number of publications ";
				cin>>publication;
			}
			bool isoutstanding(){
				return(publication>100);
			}
};
main(){
	int x;
	int a;
	float f;
	string s;
	do{
		cout<<"\t\t Menu"<<endl<<"Press 1 to enter student data "<<endl<<"Press 2 to enter professor data "<<endl<<"Press 3 to exit ";
		cin>>x;
		if (x==1){
			student s("sad",10.2);
			s.getname();
			s.putname();
			s.getdata();
			bool g=s.isoutstanding();
			cout<<"\t"<<g<<endl;		
		}
		else if(x==2){
			professor p(10,"sad");
			p.getname();
			p.putname();
			p.getdata();
			bool h=p.isoutstanding();
			cout<<"\t"<<h<<endl;					
		}
		else if(x==3){
			cout<<"Exit ";
			break;
		}
	}while(x!=3);
}
