#include<iostream>
using namespace std;
class eisha
{
	int a,b;
	string name;
	public:
		eisha(int x,int y):a(x),b(y)
		{
			
		}
		friend void operator +(eisha,eisha);
		
};
friend void operator +(eisha e1){
	eisha s;
	s=(e1.a+e1.b)+(e2.a+e2.b);
	
}
main()
{
	eisha o1(2,2),o2(3,2),o3;
	o3=o1+(o2);
	
	
	
}
