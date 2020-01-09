#include<iostream>
using namespace std;
void digit_name(void)
{
	int a,flag=0;
	while(flag!=1)
	{
		cout<<"\nenter a number : ";
		cin>>a;
		switch(a)
	   {
		case 0:
			{
				cout<<"\nZero.\n";
		    	flag=1;
			}
			break;
		case 1:
			{
				cout<<"\nOne.\n";
			    flag=1;
			}
			break;
		case 2:
			{
				cout<<"\nTwo.\n";
			    flag=1;
			}
			break;
		case 3:
			{
				cout<<"\nThree.\n";
			    flag=1;
			}
			break;
		case 4:
			{
				cout<<"\nFour.\n";
		    	flag=1;
			}
			break;
		case 5:
			{
			    cout<<"\nFive.\n";
			    flag=1;	
			}
			break;
		case 6:
			{
			    cout<<"\nSix.\n";
			    flag=1;	
			}
			break;
		case 7:
			{
				cout<<"\nSeven.\n";
			    flag=1;
			}
			break;		
		case 8:
			{
			    cout<<"\nEight.\n";
		    	flag=1;	
			}
			break;	
		case 9:
			{
				cout<<"\nNine.\n";
		    	flag=1;
			}
			break;	
		default:
			cout<<"\nEntered number is in valid\n";
			break;				
    	}
	}
}
main()
{
	cout<<"                            *** Number in words ***              \n";
    cout<<"valid range of digits is : 01-09";
    digit_name();
}
