#include<iostream>
using namespace std;
class painting{
	string title;
	string ArtistName;
	int value;
	public:
		painting(){
			value=400;
		}
};
class FamousPainting:painting{
	int value;
	public:
		FamousPainting(){
			value=25000;
		}
};
main(){
	int a;
	cout<<"Choose 1 if artist is Degas,monet,Picasso,Rembrant \nChoose 0 for other artists :\n";
	cin>>a;
	switch(a)
	{
		case 1:
			painting p();
			break;
		case 0:
			FamousPainting FP();
			break;
		default:
			cout<<"invalid choice.";
			
	}
	
}
