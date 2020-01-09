#include<iostream>
using namespace std;
main()
{
	cout<<"** Calculator **\n";
	cout<<"which function would you like to perform ?\n";
	cout<<"1. Addition\n2. Subtraction\n3. multiplication\n4. division";
    cout<<"\nenter your choice : ";
    int func,a,b;
    cin>>func;
    switch(func)
    {
    	case 1:
        	{
    	    	cout<<"\nenter a: ";
    	    	cin>>a;
    	    	cout<<"\nenter b: ";
    	    	cin>>b;
    		    cout<<"\nThe sum is : "<<a+b;
    	     	break;
			}	
    	case 2:
    		{
    			cout<<"\nenter a: ";
    	    	cin>>a;
    	    	cout<<"\nenter b: ";
    	    	cin>>b;
    		    cout<<"\nThe difference is : "<<a-b;
    	     	break;
			}
		case 3:
    		{
    			cout<<"\nenter a: ";
    	    	cin>>a;
    	    	cout<<"\nenter b: ";
    	    	cin>>b;
    		    cout<<"\nThe product is : "<<a*b;
    	     	break;
			}
		case 4:
    		{
    			cout<<"\nenter numerator: ";
    	    	cin>>a;
    	    	cout<<"\nenter denominator: ";
    	    	cin>>b;
    	    	float c=a/b;
    		    cout<<"\nThe answer is : "<<c;
    	     	break;
			}
			default:
				cout<<"\ninvalid choice.";
	}

}
