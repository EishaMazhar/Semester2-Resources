#include<iostream>
using namespace std;
class Time{
	int hour,min,sec;
	public:
		Time(){
			hour=0;
			min=0;
			sec=0;
		}
		Time(int h,int m,int s):hour(h),min(m),sec(s){
			
		}
		PrintTime(){
			cout<<"\ntime in Hours : "<<hour;
			cout<<"\ntime in Minuites : "<<min;
			cout<<"\ntime in Seconds : "<<sec<<endl;
		}
		friend Time operator+(const Time &t1,const Time &t2);
		friend bool operator<(const Time &t1,const Time &t2);
};
Time operator+(const Time &t1,const Time &t2)
{
	Time t;
	t.hour=t1.hour+t2.hour;
	t.sec=t1.sec+t2.sec;
	t.min=t1.min+t2.min;
	return t;	
}
bool operator<(const Time &t1,const Time &t2){
	return (t1.hour<t2.hour);
}
main(){
	Time t1(2,24,23),t2(4,32,21);
	cout<<"\ntime in first clock : ";
	t1.PrintTime();
	cout<<"\ntime in Second clock : ";
	t2.PrintTime();
	Time t3=t1+t2;
	cout<<"\ntime in Third clock : ";
	t3.PrintTime();
	if(t1<t2){
		cout<<"Clock 1 is less than clock 2";
	}
	else{
		cout<<"Clock 2 is less than clock 1";
	}
}
