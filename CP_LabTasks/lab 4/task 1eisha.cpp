#include<iostream>
using namespace std;
class shop
{
	private:
	int code;
	int price;
	int qty;
    static int total;
    
	public:
		shop(){}
		set_data(int c,int p,int q,int t)
		{
			code=c;
			price=p;
			qty=q;
			total=total+t;
		}
		total_bill()
		{
			cout<<"\nYour total bill is : "<<total;
		}
		void add(int n)
		{
			
		}
		void delete(int d)
		{
			
		}
};
int shop::total=0;
main()
{
	int c,p,q,t,n,ch=0,d;
    cout<<"How many orders you want to place : ";
    cin>>n;
    shop s[n];
    for(int i=0;i<n;i++)
    {
    	cout<<i+1<<".\n";
    	cout<<"Enter the code no : ";
    	cin>>c;
    	cout<<"Enter the price : ";
    	cin>>p;
    	cout<<"Enter the quantity : ";
    	cin>>q;
    	t=q*p;
    	s[i].set_data(c,p,q,t);
    	cout<<"\n";
	}
	cout<<"Enter your choice : \n\n1.Exit\n2.Add\n3.Delete\n4.Print your total bill.\n";
	cin>>ch;
	while(ch!=1)
	{
		switch(ch)
	{
		case 1:
			{
				ch=1;
				break;
			}
		case 2:
			{
				s[n].add(n=n+1);
			}
		case 3:
			{
				cout<<"Enter the item code which you want to delete : ";
				cin>>d;
				s[n].delete(d);
			}
		case 4:
			{
				s[n].total_bill();
			}	
			
	}
	}
	
}
