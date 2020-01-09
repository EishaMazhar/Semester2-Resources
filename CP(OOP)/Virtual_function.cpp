# include <iostream>

using namespace std;

class A //class with one or more pure virtual function is called abstract class and its objects cant be created.
{
public:
virtual void display() //virtual keyword enables late binding to occur 
{
cout<<"Base class"<<endl;	
}

virtual void normal()=0; //pure virtual function, its defition will be implemented by its derived class. If not, the derived class becomes abstract class too
	
};

class B: public A
{
public:	
void display()
{
cout<<"Derived class"<<endl;	
}

void normal()
{
cout<<"I am normal"<<endl;	
	
}
	
};

class C: public A //inherits class A but doesnt implement pure virtual function so class C becomes a abstract class
{

};


int main()
{
	A *a;
	B b;
	a=&b;
    a->display(); //will originally execute base class display display due to early binding, but will run dervied class display if virtual keyword is used with the display function in the base class 
	
//	C c; //This will give error
	return 0;
}
