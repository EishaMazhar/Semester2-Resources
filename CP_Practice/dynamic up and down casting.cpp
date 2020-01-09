#include<iostream>
using namespace std;
class base{
	public:
		virtual display()
		{
			cout<<"Base";
		}
};
class child:public base{
	public:
		display()
		{
			cout<<"Child";
		}
};
class child2:public child{
	public:
		display(){
			cout<<"Child 2 ";
		}
};
main(){
	child *d,c;
	base *b,p;
	d=(child*)&p;
	d->display();
	b=&c;
	b->display();
	child2 *c2,ch;
	c2=(child2*)&p;
	c2->display();
	
}
