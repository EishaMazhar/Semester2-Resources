#include<iostream>
#include<fstream>
using namespace std;
class Person{
	public:
	string name;
	int age;
		Person(){
		}
		Person(string n,int a):name(n),age(a)
		{
			
		}
	
};
int main()
{
    Person Person1("Eisha",19);
	fstream file;
	file.open("Person.dat",ios::out|ios::binary);
	file<<Person1.name<<endl<<Person1.age;
	file.close();
	file.open("Person.dat",ios::in);
	file>>Person1.name;
	file>>Person1.age;
	cout<<"\nName is : "<<Person1.name<<".\nAge : "<<Person1.age;
	file.close();
	return 0;
}
