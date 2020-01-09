#include<iostream>
using namespace std;
class b;
class a{
	int x;
	public:
		a(int i):x(i){
		}
		friend disp(a,b);
};
class b{
	int x;
	public:
		b(int j):x(j){
		}
		friend disp(a,b);
	
};
disp(a e1,b e2){
	cout<<"friend :"<<e1.x+e2.x;
}
main()
{
	a obj(10);
	b ob(20);
	disp(obj,ob);
	
}
