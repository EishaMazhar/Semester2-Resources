#include<iostream>
#include<iomanip>

using namespace std;

class product
{
	int code;
	string name;
	
	public:
		
		product()
		{
			code=000;
			name="XYZ";
		}
		
		product(int c,string n):code(c),name(n){}
		
		void setProductData(int c,string n)
		{
				code=c;
				name=n;
		}
		
		int getCode() const
		{
			return code;	
		}
		
		string getName() const
		{
			return name;	
		}
};

class prePacked:public product
{
	int unitPrice;
	
	public:
		
		prePacked(string nm,int cd,int pr):unitPrice(pr),product(cd,nm)
		{	
		}
		void setdata(){}
		
		printer_PPF() const
		{
			cout<<"\nPrePacked product details are :\n";
			cout<<"Product Name : "<<getName();
			cout<<"\nProduct code : "<<getCode();
			cout<<"\nUnit Price : "<<unitPrice;
			cout<<"\n";	
		}
		
};
class FreshFood:public product
{
	float weight;
	float PricePerKg;
	float PricePerUnit;
	
	public:
		
		FreshFood()
		{
		}
		
		void scanner()
		{
			cout<<"\nEnter details for the fresh food :\n\n";
			int cd;
			string name;
			float wtg,ppKg;
			cout<<"Enter the name of product : ";
			cin>>name;
			cout<<"Enter product code : ";
			cin>>cd;
			cout<<"Enter the price per KG : ";
			cin>>ppKg;
			cout<<"Enter the weight of product : ";
			cin>>wtg;
			setData(name,cd,ppKg,wtg);
	
		}
		
		setData(string name,int cd,float ppKg,float wtg)
		{
			weight=wtg;
			PricePerKg=ppKg;
			setProductData(cd,name);
		}
		
		float get_PPKG()
		{
			return PricePerKg;
		}
		
		float get_weight()
		{
			return weight;
		}
		
		float get_PPUnit()
		{
			return (weight*PricePerKg);
		}
		
		void printer()
		{
			cout<<"\nDetails for the freash food are :\n";
			cout<<"Product name : ";
			cout<<getName();
			cout<<"\nProduct code : "<<getCode()<<endl;
			cout<<"Price per KG : "<<fixed<<setprecision(2)<<get_PPKG()<<endl;
			cout<<"Total weight : "<<fixed<<setprecision(2)<<get_weight()<<endl;
			cout<<"Price per unit : "<<fixed<<setprecision(2)<<get_PPUnit()<<endl;
			
		}
	
};
int main()
{
	string n1;
	int p1,cd1;
	FreshFood Frsh;
	
	cout<<"                     ** Welcome to the grocery store ** \n\n";
	cout<<"Enter details for Prepacked food :\n\n";
	cout<<"Enter the name of product : ";
	cin>>n1;
	cout<<"Enter the code of product : ";
	cin>>cd1;
	cout<<"Enter the price of product per unit : ";
	cin>>p1;
	
	prePacked pro1(n1,cd1,p1);
	Frsh.scanner();
	
	pro1.printer_PPF();
	Frsh.printer();
	
	return 0;
}
