#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream file;
	string eisha;
	file.open("example.txt");
	cin>>eisha;
	file<<eisha;
	file.close();
}
