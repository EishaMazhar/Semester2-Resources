#include<iostream>
using namespace std;
class cashRegister
{
	private :
		int cashOnHand;
	public :
		cashRegister(){}
		
		int getCurrentBalance() const
		{
			return cashOnHand;
		}
		void acceptAmount(int amountIn)
		{
			cashOnHand=cashOnHand+amountIn;
		}
		cashRegister(int cashIn)
		{
			if(cashIn>=0)
			{
				cashOnHand=cashIn;
			}
			else
			    cashOnHand=500;
		}
};
class dispenserType
{
	private :
		int numberOfItems;
		int cost;
	public :
		dispenserType(){}
		
		dispenserType(int setNoOfItems,int setCost)
		{
			if(setNoOfItems>=0)
			numberOfItems=setNoOfItems;
			else
			numberOfItems=50;
			
			if(setCost>=0)
			cost=setCost;
			else
			cost=50;
		}
		int getNoOfItems() const
		{
			return  numberOfItems;
		}
		int getCost()const
		{
			return cost;;
		}
		void makeSale()
		{
			numberOfItems--;
		}
};
void ShowSelection()
{
	cout<<"     ** Welcome to Shelley's Candy Shop **  \n";
	cout<<"To select an Item ,enter :  \n";
	cout<<"1 for Candy \n";
	cout<<"2 for Chips \n";
	cout<<"3 for Gum \n";
	cout<<"4 for Cookies\n";
	cout<<"9 to Exit\n";
}
void sellProduct(dispenserType &product,cashRegister &counter)
{
	int amount,amount2;
	if(product.getCost()>0)
	{
		cout<<"Please Deposit "<< product.getCost()<<" cents " <<endl;
		cin>>amount;
		
		if(amount<product.getCost())
		{
			cout<<"Please deposit another "<<product.getCost()-amount<<" cents ";
			cin>>amount2;
			amount+=amount2;
		}
		if(amount>=product.getCost())
		{
			counter.acceptAmount(amount);
			product.makeSale();
			cout<<"Collect your item and enjoy \n";
		}
		else
		cout<<"Your amount is not enough..Collect what you deposited!"<<endl<< "                      *_ *_ *_ *_ *_ *           ";
	}
	else
	cout<<"Sorry the item is sold out !\n";
	system("color 8B");
}
main()
{
	int choice;
	cashRegister counter;
	dispenserType candy(100,50);
	dispenserType chips(100,65);
	dispenserType gum(75,45);
	dispenserType cookies(100,85);
	ShowSelection();
	cin>>choice;
	while(choice!=9)
	{
		switch(choice)
		{
			case 1:
				sellProduct(candy,counter);
				break;
			case 2:
				sellProduct(chips,counter);
				break;
			case 3:
				sellProduct(gum,counter);
				break;
			case 4:
				sellProduct(cookies,counter);
				break;
			default:
					cout<<"Invalid choice!\n";
		}
		ShowSelection();
		cin>>choice;
	}	
}
