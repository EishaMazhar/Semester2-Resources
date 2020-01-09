#include <iostream>

using namespace std;

class Employee
{
	public:
		Employee()
		{
		}
		Employee(string f,string l,int s)
		:fname(f),lname(l),snum(s)
		{
			
		}
		
		void setdata()
		{
			cout << "Enter First Name : ";
			cin >> fname;
			cout << endl;
			cout << "Enter Last Name : ";
			cin >> lname;
			cout << endl;
			cout << "Enter Social Security Number : ";
			cin >> snum;
			cout << endl;
		}
		
		virtual double earning()=0;
		
		virtual void print()
		{
			cout << "Employee data :::"<<endl; 
			cout << "Name : " << fname << " " << lname << endl;
			cout << "SSN : " << snum << endl;
		}
		
	
		virtual void detail()
		{
			
		}
		
		
	protected:
		string fname;
		string lname;
		int snum;	
};

class salariedemployee : public Employee
{
	public:
		salariedemployee(string f,string l,int s)
		:Employee(f,l,s)
		{
			
		}
		
		void setdata()
		{
			Employee::setdata();
		}
		
		double earning()
		{
			cout << "Enter Number of Weeks worked : ";
			cin >> weeks;
			cout << endl;
			salary = weeks * 10000;
			return salary;
			
		}
		
		void print()
		{
			Employee::print();
		}
		void detail()
		{
			cout << "salary Earned : "<< salary;
		}
		
	private:
		double salary;
		int weeks;	
};

class hourlyemployee : public Employee
{
	public:
		hourlyemployee(double w,int h,string f,string l,int s)
		:wage(w),hour(h),Employee(f,l,s)
		{
			
		}
		
		double earning()
		{
			salary = hour * wage;
			return salary;
		}
		
		void setdata()
		{
			Employee::setdata();
		}
		
		void print()
		{
			Employee::print();
		}
		
		void detail()
		{
			cout << "Salary Earned : "<< salary;
		}
		
	private:
		double wage;
		int hour;
		double salary;	
};

class comissionemployee : public Employee
{
	public:
		comissionemployee()
		{
		}
		comissionemployee(double c,double g,string f,string l,int s)
		:crate(c),grate(g),Employee(f,l,s)
		{
			
		}
		
		double earning()
		{
			comm = crate * grate;
			return comm;
		}
		
		void setdata()
		{
			Employee::setdata();
		}

		void print()
		{
			Employee::print();
		}
		
		void detail()
		{
			cout << "Commission : "<< comm;
		}
		
	private:
		double crate;
		double grate;
		double comm;
			
}; 

class BSPC : public Employee
{
	public:
		BSPC()
		{
			
		}
		
		BSPC(double sa,double sl,string f,string l,int s)
		:salary(sa),sales(sl),Employee(f,l,s)
		{
			
		}
	
		double earning()
		{
			bcom = (1.1 * salary) + (0.2 * sales);
			return bcom;
		}	
		
		void setdata()
		{
			Employee::setdata();
		}

		void print()
		{
			Employee::print();
		}
		
		void detail()
		{
			cout << "Base Commission : "<< bcom;
		}
			
	private:
		double salary;
		double bcom;
		double sales;	
};

int main()
{
	Employee *ptr;
	
	salariedemployee obj1("lala","lala",12346);
	ptr = &obj1;
	cout << "----- Salaried Employee ------"<< endl << endl;
	ptr->setdata();
	ptr->earning();
	ptr->print();
	ptr->detail();
	
	cout << endl << endl;
	
	cout << "----- Hourly Employee ----- " << endl << endl;
	double w;
	int h;
	cout << "Enter wage and hours worked : ";
	cin >> w >> h;
	cout << endl;
	hourlyemployee obj2(w,h,"lala","lala",12345);
	ptr = &obj2;
	ptr->setdata();
	ptr->earning();
	ptr->print();
	ptr->detail(); 
	
	cout << endl << endl;
	
	Employee *ob = new comissionemployee;
	
	comissionemployee * ptr1 = dynamic_cast<comissionemployee *>(ob);
	
	cout << "-----Commision Employee-----"<< endl << endl;
	double c,g;
	cout << "Enter Comission rate and Gross rate : ";
	cin >> c >> g;
	cout << endl;
	comissionemployee obj3(c,g,"lala","lal",2134);	
	ptr1->setdata();
	ptr1->earning();
	ptr1->print();
	ptr1->detail(); 
	
	cout << endl << endl;
	
	Employee *ob1 = new BSPC;
	
	BSPC * ptr2 = dynamic_cast<BSPC *>(ob1);
	
	cout << "-----Base Salary Plus Comission Employee-----" << endl << endl;
	
	double sa,sl;
	cout << "Enter Salary and Sales : ";
	cin >> sa >> sl;
	cout << endl;
	BSPC obj4(15000,5000,"lala","lala",1234);
	ptr2->setdata();
	ptr2->earning();
	ptr2->print();
	ptr2->detail(); 
	 
	
	
	return 0;
}
