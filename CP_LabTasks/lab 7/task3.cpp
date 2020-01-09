#include<iostream>
using namespace std;
class Account
{
	protected :
	    int Balance;
	public:
	
		Account(){
			Balance=3000;
		}
		Deposit(int amt)
		{
			Balance+=amt;
			cout<<Balance;
		}
		Withdraw(int w)
		{
			if(w>Balance){
				cout<<"Amount cannot be withdrawn";
			}
			else
			{
				Balance=Balance-w;
		        cout<<"Amount withdrawn\nYour balance is "<<Balance<<endl;
			}
		
		}
		CheckBalance()
		{
			cout<<"Your balance is : "<<Balance;
		}
};
class InterestAccount:public Account
{
	private : 
	    float Interest;
	public:
		Deposit(int amnt)
		{
			float in;
			in=Balance*0.3;
			Balance=(float)Balance+in+amnt;
			cout<<"Your balance is : "<<Balance;
		}
};
class ChargingAccount:public Account
{
	
	private :
		float fee;
	public:
		Withdraw(int wd)
		{
			if((wd+3)>Balance){
				cout<<"Amount cannot be withdrawn";
			}
			else
			{
				Balance=Balance-wd-3;
		        cout<<"Amount withdrawn\nYour balance is "<<Balance<<endl;
			}
		}
		
};
class ACI:public InterestAccount,public ChargingAccount
{
	public:
	
		
		Transfer(double amount,Account &acc)
		{
				int a;
			cout<<"What function do you want to perform :\n1.Deposit\n2.Withdraw\n3.Check Balance\n";
			cin>>a;
			switch(a)
			{
				case 1:
					{
						int a;
						cout<<"Enter the amount to be deposited : ";
						cin>>a;
						acc.Deposit(a);
						cout<<"\nAmount has been deposited.";
				    	break;
					}
				case 2:
					{
						int a;
						cout<<"Enter the amount you want to withdraw : ";
						cin>>a;
						acc.Withdraw(a);
						break;
					}
					
				case 3:
						acc.CheckBalance();
						break;
				default:
						cout<<"Invalid choice";
			}
		}
		Transfer(double amount,InterestAccount &IA)
		{
			int a;
			cout<<"What function do you want to perform :\n1.Deposit\n2.Withdraw\n3.Check balance\n";
			cin>>a;
			switch(a)
			{
				case 1:
						int a;
						cout<<"Enter the amount to be deposited : ";
						cin>>a;
						IA.Deposit(a);
						cout<<"\nAmount has been deposited.";
				    	break;
					
				case 2:
			
						cout<<"Enter the amount you want to withdraw : ";
						cin>>a;
						IA.Withdraw(a);
						break;
				case 3:
						IA.CheckBalance();
						break;
			}
		}
		Transfer(double amount,ChargingAccount &CA)
		{
				int a;
			cout<<"What function do you want to perform :\n1.Deposit\n2.Withdraw\n3.Check balance\n";
			cin>>a;
			switch(a)
			{
				case 1:
						int a;
						cout<<"Enter the amount to be deposited : ";
						cin>>a;
						CA.Deposit(a);
						cout<<"\nAmount has been deposited.";
				    	break;
					
				case 2:
						cout<<"Enter the amount you want to withdraw : ";
						cin>>a;
						CA.Withdraw(a);
						break;
					
				case 3:
						CA.CheckBalance();
						break;
			}
		}

};
main()
{
	double Amount;
	int n;
	ACI eisha;
	InterestAccount Iacc;
	ChargingAccount Cacc;
	Account acc;
	cout<<"Through which account you want to transfer amount :\n1.Interest account\n2.ChargingAccount\n3.Normal account\n";
	cin>>n;
	switch(n)
	{
		case 1:
			{
				eisha.Transfer(Amount,Iacc);
				break;
			}
		case 2:
			{
				eisha.Transfer(Amount,Cacc);
				break;
			}
		case 3:
			{
				eisha.Transfer(Amount,acc);
				break;
			}
	}
	
}
