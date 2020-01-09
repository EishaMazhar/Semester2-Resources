#include<iostream>
using namespace std;
class a{
	public:
		a(){
			cout<<"\ncons base";
		}
		
		~a(){
			cout<<"\ndes base";
		}
};
class b:public a{
	public:
		b(){
			cout<<"\ncons child";
			
		}
		~b(){
			cout<<"\ndes child";
		}
};
main(){
	b *ch=new b();
	a *bs=ch;
	delete bs;
	cout<<"..";
	
	
}
