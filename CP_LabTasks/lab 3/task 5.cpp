#include<iostream>
#include<iomanip>
using namespace std;
class shop{
	private:
		int Bags,n,rem;
		float c,cl,cm,cs;	
	public:
		void set_in(int no)
		{
			Bags=no;
			n=Bags;
		}
		int get_in()
		{
		    
			return Bags;
		}
		void cost(void){
			c=Bags*5.50;
			cout<<"The cost of order is : "<<c;
		}
		void Boxes(void)
		{
			rem=n/20;
			cl=(float)rem*1.8;
			cout<<rem<<" large  : $ "<<fixed<<setprecision(2)<<cl<<endl;
			n=n-rem*20;
			rem=n/10;
			cm=(float)rem*1.00;
			cout<<rem<<" Medium : $ "<<fixed<<setprecision(2)<<cm<<endl;
			n=n-rem*10;
			if(n!=0){
				rem=1;
			}
			else
			rem=0;
			cs=(float)rem*0.60;
			cout<<rem<<" Small  : $ "<<fixed<<setprecision(2)<<cs;
		}	
		float Total()
		{
			return (c+cl+cm+cs);
		}	
};
main()
{
	shop e;
	int no;
	cout<<"Enter the number of bags to be ordered : ";
	cin>>no;
	e.set_in(no);
	e.cost();
	cout<<"\nBoxes Used :\n";
	e.Boxes();
    cout<<"\nThe total amount would be : "<<e.Total();
	
}
