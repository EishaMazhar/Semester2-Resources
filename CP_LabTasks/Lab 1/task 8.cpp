#include<iostream>
using namespace std;
main()
{
	int g,c,i,comb=1;
	
	cout<<"enter the number of guests : ";
	cin>>g;
	cout<<"enter the number of chairs : ";
	cin>>c;
	
	if(g>c)
	{
		for(i=g	; i>g-c ; i--)
		{
			comb*=i;
			cout<<i<<"\n";
		}
		cout<<"no of guest arrangement would be "<<comb;
	}
	
    else
    cout<<"one can sit on one";
        
}

