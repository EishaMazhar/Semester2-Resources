#include<iostream>
#include<fstream>
using namespace std;
main()
{
	fstream file;
	
	file.open("stringfile.txt",ios::out);
	char s[100];
	cout<<"Input a string: \n";
	cin.getline(s,100);
	file<<s;
	file.close();
	
	int i;
	
	file.open("stringfile.txt",ios::in);
	while(s[i]!=0)i++;
	cout<<"Length of string is : "<<i<<endl;
	cout<<"\ndata of file is : \n";
	i=0;
	while(file){
		file.get(s[i]);
		cout<<s[i];
			i++;
	}
	file.close();
}
