#include<iostream>
using namespace std;
class Sales{
	int saleID;
	string ItemName;
	int Qty;
	public:
		Sales(){
			saleID=0;
			Qty=0;	
			ItemName="xyz";	
		}
		Sales(int ID,string n,int q)
		{
			saleID=ID;
			ItemName=n;
			Qty=q;
		}
		Sales(Sales &s)
		{
		//	saleID=s.saleID;
		//	ItemName=s.ItemName;
			Qty=s.Qty;
		}
		display(){
			cout<<Qty<<endl;
			cout<<ItemName<<endl;
			cout<<saleID<<endl;
		}
};
main()
{
	int ID,q;
	string name;
	cout<<"Enter the Sale ID : ";
	cin>>ID;
	cout<<"Enter the Item name : ";
	cin>>name;
	cout<<"Enter the Quantity : ";
	cin>>q;
	Sales s(ID,name,q);
	Sales s2(s);
	s2.display();
}
