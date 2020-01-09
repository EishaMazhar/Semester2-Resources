#include<iostream>
using namespace std;
class rectangle{
	private:
    	float length;
    	float width;
    	
	public:    
     	rectangle(){
		length=1.0;
		width=1.0;
	}
	
		set_length(float len)
		{
			if(len>0 && len<20)
			length=len;
		}
		float get_length()
		{
			return length;
		}
		
		set_width(float wid)
		{
			if(wid>0 && wid<20)
			   width=wid;
		}
		float get_width()
		{
			return width;
		}
		float perimeter()
		{
			return 2*(length+width);
		}
		float area()
		{
			return length*width;
		}
};
main()
{
	rectangle r;
	float len,wid,peri,area;
	cout<<"enter the length : ";
	cin>>len;
	cout<<"enter the width : ";
	cin>>wid;
	r.set_length(len);
	r.set_width(wid);
	cout<<"\nThe perimeter is : "<<r.perimeter();
	cout<<"\nThe area is : "<<r.area();
}
