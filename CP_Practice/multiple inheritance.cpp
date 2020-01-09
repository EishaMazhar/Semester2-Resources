#include<iostream>
#include<string>

using namespace std;

class File{
public:
	File(string fname){
		cout << "ctor from File" << endl;
	}
	string name;
	void Open(){
		cout << "Open from File" << endl;
	}
};

class FileInput:virtual public File {
public:	
	FileInput(string fname):File(fname){
		cout << "ctor from FileInput" << endl;
		name = "File 1";
	}
	void Read(){}
	
};
class FileOutput :virtual public File {
public:		
	FileOutput(string fname):File(fname){
		cout << "ctor from FileOutput" << endl;
		name = "File 2";
	}
	void Write(){}
};
class FileIO : virtual public FileOutput,virtual public FileInput{
public:	
	//required top most grand parent class initializer to expicitly call in the bottom most derived class
	FileIO(string fname) :FileOutput(fname), FileInput(fname), File(fname){
		cout << "ctor from FileIO" << endl;
	}
	/*
	void Open(){
		FileInput::Open();
	}*/
	//Read()
	//Write()
};
int main(){
	FileIO IOFileObj("File1");
	IOFileObj.Open();
	cout << IOFileObj.name;
	int y;
	cin >> y;
}
