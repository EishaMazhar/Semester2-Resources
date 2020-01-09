#include<iostream>
using namespace std;

//         size of virtual class 
class A{
	public:
		virtual fun(){
		}
};
class B{
	public:
		fun(){
			
		}
};
main(){
	int a=sizeof(A),b=sizeof(B);
	if(a==b)cout<<"a==b";
	else if(a>b)cout<<"a>b";//ye line chale gi cz jis class main virtual hota hai uski mem zyada hoti
	else if(a<b)cout<<"a<b";
}



//             Template and static memory
//template <class T,class U>
//class A{
//	T x;
//	U y;
//	static int count;
//	
//};
//main(){
//	A <char,char> a;
//	A <int,int>b;
//	cout<<sizeof(a)<<endl<<sizeof(b);
//}



//         Runtime polymorphism
//class A
//{
//	public:
//		virtual f1()
//		{
//			cout<<"A";
//		}
//};
//class B:public A
//{
//	public:
//		f1()
//		{
//			cout<<"B";
//		}
//};
//main()
//{
//	A *p,o1;
//	B *c,o2;
//	p=&o2;
//	c=(B*)&o1;
//	p->f1();
//}
