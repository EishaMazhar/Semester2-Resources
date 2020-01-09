#include<iostream>
using namespace std;
class eisha{
	int a,b;
	public:
		 eisha(int x,int y):a(x),b(y)
		{
				
		}
		friend eisha operator +(eisha &e,eisha &e1);
		disp(){
			cout<<"\n"<<a<<"\n"<<b;
		}
};
eisha operator +(eisha &e,eisha &e1){
			eisha s(0,0);
			s.a=e1.a+e.a;
			s.b=e1.b+e.b;
			return(s);
}
main(){
	eisha e(2,1);
	eisha e1(3,4),e2(0,0);
	e.disp();
	e2=e+e1;
	e2.disp();
}
