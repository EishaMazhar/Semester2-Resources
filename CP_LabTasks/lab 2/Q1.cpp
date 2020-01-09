//draws a rectangle using functions
#include <stdio.h>
#include <iostream>
using namespace std;
char sym;
void draw_solid_line(int size);
void draw_hollow_line(int size);
void draw_rectangle(int len, int wide);

int main(void) 
{
	int length, width;
    cout<<"Enter length and width of rectangle >";
    cin>>length;
    cin>>width;
    cout<<"Enter the symbol : ";
    cin>>sym;
    draw_rectangle(length, width);
    system("pause");
    return 0;

}
void draw_solid_line(int size)
{
	for(int i=1;i<=size;i++)
	{
	     cout<<sym;
	}
	cout<<"\n";
}
void draw_hollow_line(int size)
{
		for(int i=1;i<=size;i++)
	{
		if(i==1||i==size)
	       cout<<sym;
	       else
	       cout<<" ";
	}
	cout<<"\n";
}
void draw_rectangle(int len, int wide)
{
    int i;
    draw_solid_line(wide);
    if (len > 2)
	{
        for (i=1; i<=len - 2; i++)
         draw_hollow_line(wide);
    }
    draw_solid_line(wide);
}
