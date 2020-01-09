#include<iostream>
using namespace std;
class Account{
	string NameOfDepositor;
	string AccountNo;
	string TypeOfAccount;
	float BalanceAmount;
	
	public:
		static float Rate;
		Account(){}
		
		Account(string n,string no,string type)
		{
			BalanceAmount=7000;
			NameOfDepositor=n;
			AccountNo=no;
			TypeOfAccount=type;
		}
		
		Deposit()
		{
			int amt;
			cout<<"Enter the amount you want to deposit : ";
			cin>>amt;
			BalanceAmount+=amt;
			cout<<"Amount deposited .";
		}
		Withdraw_Amount()
		{
			int wd;
			cout<<"Enter the amount you want to withdraw : ";
			cin>>wd;
			if(BalanceAmount>wd)
			{
				BalanceAmount-=wd;
				cout<<"\nYour cash is withdrawn successfully.";
			}
			else
			cout<<"cannot withdraw amount Your account balance is less";
		}
		DisplayDetails()
		{
			cout<<"Name : "<<NameOfDepositor;
			cout<<"\nAccount no : "<<AccountNo;
			cout<<"\nAccount type : "<<TypeOfAccount;
			cout<<"\nYour balance amount is : "<<BalanceAmount;
			
		}
		static Display_Rate_Of_Interest()
		{
			cout<<"\nRate of interest is : "<<Rate;
		}
		
};
float Account::Rate=0.2;
main()
{
	string name,accountNo,AccountType;
	float balance,Rate;
	int c=0;
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter your account no : ";
	cin>>accountNo;
	cout<<"Enter your account type : ";
	cin>>AccountType;
	Account a(name,accountNo,AccountType);
	while(c!=4)
	{
		cout<<"\nEnter your choice :";
    	cout<<"\n1.Display Your details\n2.Deposit Amount\n3.Withdraw cash\n4.Exit\n";
    	cin>>c;
    	switch(c)
    	{
    		case 1:
    			a.DisplayDetails();
				Account::Display_Rate_Of_Interest();
    			break;
    		case 2:
    		    a.Deposit();
    		    break;
    		case 3:
    			a.Withdraw_Amount();
    		default :
    		{
    			cout<<"\nInvalid choice .";
			}
		}
	}

}
