#include<iostream>
using namespace std;
main()
{
	int amount, total;
	cout<<"           ** Program to break an amount into bank notes **           \n\n";
	cout<<"Input the amount: ";
	cin>>amount;
	total = (int)amount/100;
	cout<<"There are: ";
	cout<<"\n"<<"Note(s) of 100.00 : "<<total<<"\n";
	amount = amount-(total*100);
	
	total = (int)amount/50;
	cout<<"Note(s) of  50.00 : "<<total<<"\n";
	amount = amount-(total*50);
	
	total = (int)amount/20;
	cout<<"Note(s) of  20.00 : "<<total<<"\n";
	amount = amount-(total*20);
	
	total = (int)amount/10;
	cout<<"Note(s) of  10.00 : "<<total<<"\n";
	amount = amount-(total*10);
	
	total = (int)amount/5;
	cout<<"Note(s) of  05.00 : "<<total<<"\n";
	amount = amount-(total*5);
	
	total = (int)amount/2;
	cout<<"Note(s) of  02.00 : "<<total<<"\n";
	amount = amount-(total*2);
	
	total = (int)amount/1;
	cout<<"Note(s) of  01.00 : "<<total<<"\n";

}
