#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class Team
{
	private:
		int n1;
		
	public:
		void InputNum1()
		{
			cout<<"Enter Number from 1 to 10 (inclusive) : ";
			cin>>n1;
			if(n1<0)
			{
				n1=1;
			}
		}
		void GenNum1()
		{
			srand(time(NULL));
			n1=rand()%10+1;
		}
		int GetNum1()
		{
			return n1;
		}
};

main()
{
	Team T1;
	Team T2;
	int n=0,count1=0,count2=0;
	cout<<"                   ** Hitting Game ! **\n\n";
	cout<<"Enter no. of players : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		T1.InputNum1();
		T2.GenNum1();
		cout<<"Enter Number 2 : "<<T2.GetNum1()<<endl;
		if	(T1.GetNum1()==T2.GetNum1())
		{
			cout<<"\nEnemy got hit by your team\n\n";
			count1++;
		}
		else
		{
			cout<<"\nYou got hit by the enemy\n\n";
			count2++;
		}	
	}
	if(count1>count2)
	{
		cout<<"\n*** You Won ***";
	}
	else if(count1<count2)
	{
		cout<<"\n*** You Lost ***";
	}
	else
	{
		cout<<"\n*** GAME DRAWN ***";
	}	
}
