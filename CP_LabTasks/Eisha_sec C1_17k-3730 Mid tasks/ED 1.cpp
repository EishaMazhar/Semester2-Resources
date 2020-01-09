#include<iostream>
using namespace std;
main()
{
	string s;
	int i=0,k=0,j=0;
	cout<<"Enter any number : ";
	cin>>s;
	while(s[i]!='\0'){
		i++;
	}
	cout<<"No of digits are : "<<i;
	i=0;
	
	while(s[k]!='\0')
	{
		j=0;
		while(s[i]!='\0')
 		{
		
			if(s[k]==s[i])
			{
				j++;
			
			}
		i++;
		}
		cout<<endl<<s[k]<<" occurs : "<<j<<" times";
  	k++;
	}
	
	
	
}
