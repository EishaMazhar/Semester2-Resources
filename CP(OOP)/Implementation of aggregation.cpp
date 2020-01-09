//Implementation of aggregation

#include<iostream>
#include<string>
using namespace std;

// Part Class
class Processor
{
private:
	double ClockSpeed;

public:
	Processor()
	{ ClockSpeed = 3.6;}
	
	Processor(double CS){
		ClockSpeed = CS;
	}
	double getClockSpeed() const
	{
		return ClockSpeed;
	}
	void setClockSpeed(double CS)
	{
		ClockSpeed = CS;
	}
};

// Whole/Aggregate Class
class Computer
{
	Processor *proc;
	string operatingSystem;

public:
	Computer(){
		operatingSystem = "Windows";
	}

	~Computer(){
		cout << "Destructor: Computer \n" << endl;
		delete proc;		
	}

	Processor* getProcessor(){
		return proc;
	}

	void setProcessor(Processor *p){
		proc = new Processor;		//deep copy
		proc->setClockSpeed(p->getClockSpeed());
		proc->setClockSpeed(5.0);
	}
	
	void print(){
		cout << "Operating System: " << operatingSystem << endl;
		cout << "Clock Speed: " << proc->getClockSpeed() << endl;
	}
};

//Driver 
int main()
{	
		Processor processor(3.6);
		//starting new Scope
		{	
			
			Computer PC1;
			PC1.setProcessor(&processor);
			PC1.print();
			
		}
		cout << "Whole Object Died out but part still exist" << endl;
		cout << "Processor's Clock Speed is: " << processor.getClockSpeed() <<endl;
		return 0;
}
