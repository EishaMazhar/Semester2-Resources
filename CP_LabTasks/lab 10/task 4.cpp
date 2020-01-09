#include<iostream>
#include<fstream>
using namespace std;
class Participant
{
	public:
		string ID;
		string Name;
		int score;
		Input()
		{
			fstream file;
			file.open("Participant.dat",ios::out|ios::app);
			cout<<"Enter Name,ID,and score seperating through space and hit enter when completed\n";
			cin>>Name>>ID>>score;
			file<<Name<<ID<<score<<endl;
			file.close();
			
		}
		friend Output(string,Participant);
		friend Max(Participant);
		
};
Output(string a,Participant const E[])
{
	for(int i=0;i<3;i++)
	{
 	    if(E[i].ID==a)
	    {
			cout<<"\nDetails are : \nName : "<<E[i].Name<<"\nID : "<<E[i].ID<<"\nScore : "<<E[i].score;
		}
	}
}
int Max(Participant const E[])
{
	int i,temp=0;
	for(i=0;i<3;i++)
	{
		if(E[i].score>temp)
			temp=E[i].score;
	}
	cout<<endl<<"Max score are : "<<temp;
}
main()
{
	Participant E[3];
	string a;
	cout<<"Enter data for first Participant : \n";
	E[0].Input();
	cout<<"\nEnter data for Second Participant : \n";
	E[1].Input();
	cout<<"\nEnter data for Third Participant : \n";
	E[2].Input();
	cout<<"Enter ID whose data you want to see :\n";
	cin>>a;
	Output(a,E);
	Max(E);
	
}
