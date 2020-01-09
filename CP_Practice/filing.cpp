#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string name="eisha";
	fstream file;
	file.open("myfile.txt",ios::out);
	file<<name;
	file.close();
	file.open("myfile.txt",ios::in);
	file>>name;
	cout<<name;
	
	
	file.open("myfile.txt",ios::in|ios::app);
	int i,j,a[i][j];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
		   file>>a[i][j];
		}
	}
	file.close();
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
		   cout<<a[i][j]<<" ";
		}	cout<<endl;
	}
}
