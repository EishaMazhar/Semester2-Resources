#include<iostream>
using namespace std;
class Person
{
	protected:
		string firstName;
		string lastName;
	public:
		Person(string FName,string Lname):firstName(FName),lastName(Lname)
		{	
		}
};
class Doctor:Person
{
	protected:
		string speciality;
	public:
		Doctor(string s,string fn,string ln):Person(fn,ln),speciality(s){		
		}
};
class Patient:Person
{
	protected: 
	string patientID;
	int age;
	string DOB;
	string admitDate;
	string dischargeDate;
	string DrName;
	public:
	
		Patient(string dn,string f,string l,string id,int a,string dob,string ad,string dd):DrName(dn),Person(f,l),patientID(id),age(a),DOB(dob),admitDate(ad),dischargeDate(dd){	
		}
	
	
};
class Bill:Patient
{
	string charges;
	public:
		Display()
		{
		
		}
	
};
main()
{
	Patient p("Dr Ali","eisha","mazhar","13d22",19,"19/12/98","12/12/17","13/12/17");
	
	
}
