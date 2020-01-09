#include<iostream>
#include<iomanip>
using namespace std;

main()
{
	int n;
	cout<<"enter the number of subjects : ";
	cin>>n;
	float sum=0,marks[n];
	cout<<"enter the marks :\n";
	for(int i=0;i<n;i++)           //loop for taking marks input
	{
		cin>>marks[i];
	}
	for(int i=0;i<n;i++)           //loop for sum
	{
		sum+=marks[i];
	}
	float avg=(sum/n);
	
	cout<<"the average is : "<<fixed<<setprecision(4)<<avg;
}
