#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Student{
	int RollNo;
	string Name;
public:
	Student(){
		
	}
	Student(int r, string n){
		RollNo = r;
		Name = n;
	}
	void display(){
		cout << "Display Function";
		cout << "RollNo. " << RollNo;
		cout << "Name " << Name;
		cout << endl;
	}
	void SaveToFile(){
		ofstream out;		
		out.open("StudFile.txt",ios::app);
		//out << RollNo << Name;
		out.write((char*)this, sizeof(Student));		
		out.close();
	}

	void ReadFromFile(){
		Student obj;
		ifstream iFile;
		iFile.open("StudFile.txt",ios::in|ios::binary);
		if(iFile.is_open()){
			cout << "Reading From File" << endl;
			while (true)
				//while ((iFile.read((char*)&obj, sizeof(Student))) != NULL)
			{
				//obj.display();
				iFile.read((char*)&obj, sizeof(Student));
				
				if (iFile.eof()) break;
				cout << obj.RollNo << "," << obj.Name << endl;
			}
		}
		else
			cout << "File Not exist!" << endl;
		iFile.close();
	}
};
int main()
{
	int r;
	string n;
	cout << "Enter Members " << endl;
	cout << "RollNo: " << endl;
	cin >> r;
	cout << "Name: " << endl;
	cin >> n;
	Student s1(r,n);
	//s1.display();
	s1.SaveToFile();
	s1.ReadFromFile();
	int a;
	cin >> a;
	return 0;
}
