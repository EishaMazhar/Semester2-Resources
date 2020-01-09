/*Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store.
An Invoice should include four data members—a part number (type string), a part description (type string), a quantity of the item being purchased (type int) and a price per item (type float).
Your class should have a functions that initializes the four data members. Provide a get function for each data member.
In addition, provide a member function named getInvoiceAmount that calculates the invoice amount (i.e., multiplies the quantity by the price per item), then returns the amount as a float value.
If the quantity is not positive, it should be set to 0. If the price per item is not positive, it should be set to 0.
Write a test program that demonstrates class Invoice’s capabilities.*/
#include<iostream>
using namespace std;
class hardware{
	string part_num,description;
	int quantity;
	float p_per_item;
	public:
		hardware(){
			quantity=0;
			p_per_item=0;
		}
		set_data(string part,string des,int quant,float pp_item)
		{
			part_num=part;
			description=des;
			
			if(quant>0){
				quantity=quant;
			}
			if(pp_item>0)
			p_per_item=pp_item;
		}
		string get_p_no(){
			return part_num;
		}
		string get_desc(){
			return description;
		}
		int get_Quant(){
			return quantity;
		}
		float get_quan(){
			return p_per_item;
		}
		float invoice(){
			return quantity*p_per_item;
		}
	
};
main()
{
	hardware e1;
	string part,des;
	int quant;
	float pp_item;
	cout<<"Enter the part number : ";
	cin>>part;
	cout<<"Enter the description : ";
	cin>>des;
	cout<<"Enter the quantity : ";
	cin>>quant;
	cout<<"Enter the price per item : ";
	cin>>pp_item;
	e1.set_data(part,des,quant,pp_item);
	cout<<endl<<endl<<"Amount invoice would be : "<<e1.invoice();
	
	
}
