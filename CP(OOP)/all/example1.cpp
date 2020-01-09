#include<iostream>
using namespace std;

class parent{
	private:
		int temp;
	public:
		parent(){
			temp=0;
		}
	
	virtual ~parent(){
	}
	virtual void display();
//	{
//		cout<<"Parent function: "<< temp<< endl;
//	}
	
	//virtual 
	//friend void operator +(parent &p, int a);
};

class child: public parent{
	
	private:
		int var1;
	public:
		child(){
			var1=0;
		}

	void display(){
	}
//	{
//		cout<<"Child function: "<< var1<< endl;
//	}

};

int main(){
	
	//parent p;
	child c,*pptr;
	
	//pptr=(child *) &p;
	pptr->display();
	
	pptr=&c;
	pptr->display();
	
	
	}



