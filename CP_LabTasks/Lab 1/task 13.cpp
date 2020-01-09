#include<iostream>
using namespace std;
main()
{
	cout<<"         ** Program to tell the number of days in a month **                  \n\n";
	int a;
	cout<<"Enter the month:\n1.  January\n2.  February\n3.  March\n4.  April\n5.  May\n6.  June\n7.  July\8.  August\n9.  September\n10. October\n11. November\n12. December\n\n";
	cin>>a;
	switch(a)
	{
		case 1:
			{
				cout<<"number of days are : 31";
			}
			break;
		case 2:
			{
			    cout<<"number of days are : 28 ";
			}
			break;
		case 3:
			{
			    cout<<"number of days are : 31 ";
			}
			break;
		case 4:
			{
			    cout<<"number of days are : 30 ";
			}
			break;
		case 5:
			{
			    cout<<"number of days are : 31 ";
			}
			break;
		case 6:
			{
			    cout<<"number of days are : 30 ";
			}
			break;
		case 7:
			{
			    cout<<"number of days are : 31 ";
			}
			break;
		case 8:
			{
			    cout<<"number of days are : 31 ";
			}
			break;
		case 9:
			{
			    cout<<"number of days are : 30 ";
			}
			break;	
		case 10:
			{
			    cout<<"number of days are : 31 ";
			}
			break;
		case 11:
			{
			    cout<<"number of days are : 30 ";
			}
			break;			
		case 12:
			{
			    cout<<"number of days are : 31 ";
			}
			break;			
		default:
		{
			cout<<"invalid entry ! ";
					}			
	}
	
}
