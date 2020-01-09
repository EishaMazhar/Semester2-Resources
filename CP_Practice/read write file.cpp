#include<iostream>
#include<fstream>
using namespace std;
int main() 
  { 
    int x; 
    cin>>x;
    ofstream outfile;
    outfile.open("silly.dat",ios::binary| ios::out);
    outfile.write((char*)&x,7);
    outfile.close();
    ifstream infile; 
    infile.open("silly.dat", ios::binary | ios::in) ;
    infile.read((char*)&x,7);
    infile.close();
    fstream f("silly.dat",ios::in|ios::binary);
    fstream file("copy.dat",ios::binary|ios::out);
    while(f){
    	f.read((char*)&x,7);
    	f.write((char*)&x,7);
	}
	file.close();
	f.close();
}
