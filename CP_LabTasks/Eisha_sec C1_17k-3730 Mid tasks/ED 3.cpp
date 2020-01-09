#include<iostream>
using namespace std;
class CollegeCourse
{
	protected:
		string department;
		int courseNo;
		int creditHours;
		int TutionFee;
	public:
		CollegeCourse(string s,int cn,int ch,int tf):department(s),courseNo(cn),creditHours(ch),TutionFee(tf)
		{	
		}
			
		
};
class LabCourse:CollegeCourse{
	protected:
		int LabFee;
	public:
		LabCourse(string d,int n,int h,int t,int l):LabFee(l),CollegeCourse(d,n,h,t)
		{
			
		}
		Display()
		{
			cout<<"\nDepartment name : "<<department;
			cout<<"\nNo of courses : "<<courseNo;
			cout<<"\nCredit Hours : "<<creditHours;
			cout<<"\nTution fee : "<<TutionFee;
			cout<<"\nLab fee : "<<LabFee;
		}
	
};
main()
{
	LabCourse eisha("CS",5,17,100000,12000);
	eisha.Display();
}
