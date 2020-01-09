#include<iostream>
#include<fstream>
using namespace std;
main()
{
	fstream file;
	int i;
	file.open("FileA.txt",ios::out);
	string c="This content is to be copied to another file";
	while(c[i]!='\0')
	{
		file<<c[i];
		i++;	
	}
	file.close();
	fstream copy;
	i=0;
	file.open("FileA.txt",ios::in);
	copy.open("FileB.txt",ios::out);
	while(file){
		file.get(c[i]);
		copy.put(c[i]);
		i++;
	}
	file.close();
	copy.close();
}
