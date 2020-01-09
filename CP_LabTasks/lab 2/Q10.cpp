#include<iostream>
using namespace std;
order(int *p,int*q)
{
	int i,j;
	for(i=0;i<10-1;i++)
	{
		for(j=i;j<10;j++)
		{	if(p[i]>p[j])
			{
				int temp=p[i];
			    p[i]=p[j];
			    p[j]=temp;
			}
		}
	}
	cout<<"Ascending order : \n";
	for(int i=0;i<10;i++)
	{
		cout<<p[i]<<" ";
	}
	    cout<<"\n";
	i=0;j=0;
	for(i=0;i<10-1;i++)
	{
		for(j=i;j<10;j++)
		{	if(q[i]<q[j])
			{
				int temp=q[i];
			    q[i]=q[j];
			    q[j]=temp;
			}
		}
	}   
	cout<<"Descending order : \n";
	for(int i=0;i<10;i++)
	{
		cout<<q[i]<<" ";
	}
}
main()
{
	int a[10];
	cout<<"Ascending And Descending Order : \n\n";
	cout<<"Enter the 10 integer elements : \n";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	int *p=new int[10];
	for(int i=0;i<10;i++)
	{
		p[i]=a[i];
	}
	int *q=new int[10];
	for(int i=0;i<10;i++)
	{
		q[i]=a[i];
	}
	order(p,q);
	
}
