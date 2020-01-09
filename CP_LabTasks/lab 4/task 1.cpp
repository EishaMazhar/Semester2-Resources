#include<iostream>
#include <cstdlib>
#include<iomanip>
using namespace std;
class list{
	private:
		int count;
		int *code_no;
		double *price;
		int *quantity_item;
		double *total_price;
		double list_price;
		
	public:
		list(){
			count  = 0;
			list_price = 0.00;
			code_no = (int*)calloc(1,sizeof(int));
			price = (double*)calloc(1,sizeof(double));
			quantity_item = (int*)calloc(1,sizeof(int));
			total_price = (double*)calloc(1,sizeof(double));
			
		}
		void add_item(){
			int size;
			cout << "Enter number of items you want to add : ";
			cin >> size;
			for(int i = 0; i < size; i++ ){
				count++;
				code_no = (int*)realloc(code_no,(count)*sizeof(int));
				price = (double*)realloc(price,(count)*sizeof(double));
				quantity_item = (int*)realloc(quantity_item,(count)*sizeof(int));
				total_price = (double*)realloc(total_price,(count)*sizeof(double));
				cout << endl;
				cout << "Enter Code No of item  # "  << i+1 << " : ";
				cin >> code_no[count - 1];
				cout << "Enter price of item # "  << i+1  << " : ";
				cin >> price[count - 1];
				cout << "Enter quantity of items # " << i+1  << " : ";
				cin >> quantity_item[count - 1];
				this->calc_total_price(i);
				list_price += total_price[i];
			}
		}
		void remove_item(){
			int temp;
			cout << "Enter Code No of item to remove : " ;
			cin >> temp;
			for(int i = 0; i < count ; i++){
				if(temp == code_no[i]){
					for(int j = i; j < count; j++){
						code_no[j] = code_no[j + 1];
						price[j]  = price[j + 1];
						quantity_item[j] = quantity_item[j + 1];
					}
					code_no = (int*)realloc(code_no,(count - 1)*sizeof(int));
					price = (double*)realloc(price,(count - 1)*sizeof(double));
					quantity_item = (int*)realloc(quantity_item,(count - 1)*sizeof(int));
					count--;
				}
			}
		}
		void total_item(){
			cout<<endl << "your shopping list : "<< endl<< endl;
			for(int i = 0;i < count ;i++){
				cout << "code No : " << code_no[i]
					 << " Price : " << price[i]
					 << " quantity : " << quantity_item[i]
					 << " TOTAL PRICE OF ITEM # " << code_no[i] << " : " << total_price[i]
					 << endl;
			}
			cout << "Total Amount of Shopping list of " << count << " items : " 
				 << list_price <<endl;
		}
		void calc_total_price(int i){
			total_price[i] = (price[i] * quantity_item[i]);
		}
		~list(){
			free(code_no);
			free(quantity_item);
			free(price);
			free(total_price);
		}
		
	
};

int main(){
	list eisha;
	eisha.add_item();
	eisha.total_item();
	eisha.remove_item();
	eisha.total_item();
	
	
	return 0;
}

