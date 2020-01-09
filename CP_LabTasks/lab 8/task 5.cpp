#include<iostream>
using namespace std;
class numDays{
	float workHours,noOfDays;
	public:
		numDays()
		{
			
		}
		numDays(float wh)
		{
			workHours=wh;
			noOfDays=(workHours/8);
		}
		float get_noOfDays(){
			noOfDays=(workHours/8);
			return noOfDays;
		}
		Display(){
			cout<<"\nWorking hours : "<<workHours;
			cout<<"\nEquivalent days : "<<noOfDays<<endl;
		}
		friend numDays operator+(numDays &e1,numDays &e2);
		friend numDays operator-(numDays &e1,numDays &e2);
		numDays operator++(){
			++(this->workHours);	
		}
		numDays operator++(int){
			(this->workHours)++;
		}
		numDays operator--(){
			--(this->workHours);	
		}
		numDays operator--(int){
			(this->workHours)--;
		}
	
};
numDays operator+(numDays &e1,numDays &e2)
	{
		return e1.workHours+e2.workHours;
	}
numDays operator-(numDays &e1,numDays &e2)
	{
		return e1.workHours-e2.workHours;
	}
main()
{
	numDays e1(8),e2(12),e(18),e3,e4;
	e.Display();
	e3=e1+e2;
	e3.Display();
	e4=e2-e1;
	e4.Display();
	cout<<"\nPreIncrement in object 1:\n";
	++e1;
	e1.Display();
	cout<<"\nPostIncrement in object 1:\n";
	e1++;
	e1.Display();
	--e2;
	cout<<"\nPreDecrement in object 2:\n";
	e2.Display();
	e2--;
	cout<<"\nPostDecrement in object 2:\n";
	e2.Display();
	
	
	
}
