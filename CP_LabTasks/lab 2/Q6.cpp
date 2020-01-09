#include<iostream>
using namespace std;
convert(int num,int *hr,int*min,int*sec)
{
	*hr=num/3600;
	num%=3600;
	*min=num/60;
	num%=60;
	*sec=num;
}
main()
{
	int no=0,second=0,minute=0,hour=0;
	cout<<"Input the time in seconds : ";
	cin>>no;
	convert(no,&hour,&minute,&second);
	cout<<"\nThe time in HH:MM:SS format is : \n\n\t"<<hour<<" hour, "<<minute<<" minuite, "<<second<<" seconds.( "<<hour<<":"<<minute<<":"<<second<<" )";
	
}
