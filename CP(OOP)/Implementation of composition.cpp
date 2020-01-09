//Implementation of composition
#include<iostream>
using namespace std;


//Components
class ControlUnit{
public:
	void printUnitName(){
		cout << "Control Unit" << endl;
	}
};
class ArithmeticAndLogicUnit{
public:
	void printUnitName(){
		cout << "Arithmetic & Logic Unit" << endl;
	}
};
class MemoryUnit{
public:
	void printUnitName(){
		cout << "Memory Unit" << endl;
	}
};


//Composer
class Processor
{
private:
	double ClockSpeed;
	ArithmeticAndLogicUnit *alu;
	ControlUnit *cu;
	MemoryUnit *mu;

public:
	Processor(){
		ClockSpeed = 2.5;
		alu = new ArithmeticAndLogicUnit;
		mu = new MemoryUnit;
		cu = new ControlUnit;
	}
	Processor(double cs){
		ClockSpeed = cs;
		alu = new ArithmeticAndLogicUnit;
		mu = new MemoryUnit;
		cu = new ControlUnit;
	}
	~Processor(){
		cout << "Destroying Processor";
		delete alu;
		delete cu;
		delete mu;
	}
	void setClockSpeed(double CS){
		ClockSpeed = CS;
	}
	void printSpec(){
		cout << "This is a CPU. It contains following components" << endl;
		cu->printUnitName();
		mu->printUnitName();
		alu->printUnitName();
	}
};

int main(){
	Processor CPU(3.6);
	CPU.printSpec();
	return 0;
}
