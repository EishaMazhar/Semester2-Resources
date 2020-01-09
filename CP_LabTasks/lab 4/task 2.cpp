#include<iostream>
#include<string.h>
using namespace std;
class phone{
	private:
	string n;	
	string area;
	string exchange;
	string consumer;
	
	public:
		phone(){
		}
		set_data(string no)
		{
			n=no;
			area=n.substr(0,3);
			exchange=n.substr(3,4);
			consumer=n.substr(7,4);
		}
		
	    void output_display(){
			cout<<"Your Area code :"<<area<<endl;
			cout<<"Your Exchange code : "<<exchange<<endl;
			cout<<"Your Consumer no : "<<consumer;
		}
		
};
main()
{
	phone eisha;
	string no;
	cout<<"Enter a number : ";
	cin>>no;
	eisha.set_data(no);
	eisha.output_display();
}
