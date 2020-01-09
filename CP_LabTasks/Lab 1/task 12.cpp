#include<iostream>
using namespace std;
void change(int no)
{
    const char *const Array[20] = {"zero", "one", "two", "three","four","five","six","seven",
    "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
    "eighteen","nineteen"};
    const char *const Array2[10] = {"", "ten", "twenty", "thirty","forty","fifty","sixty","seventy",
    "eighty","ninety"};

    if(no<0)
    {
        cout<<"minus ";
        change(-no);
    }
    else if(no>=1000)
    {
        change(no/1000);
        cout<<" thousand";
        if(no % 1000)
        {
            if(no % 1000 < 100)
            {
                cout << " and";
            }
            cout << " " ;
            change(no % 1000);
        }
    }
    else if(no >= 100)
    {
        change(no / 100);
        cout<<" hundred";
        if(no % 100)
        {
            cout << " and ";
            change (no % 100);
        }
    }
    else if(no >= 20)
    {
        cout << Array2[no / 10];
        if(no % 10)
        {
            cout << " ";
            change(no % 10);
        }
    }
    else
    {
        cout<<Array[no];
    }
}
main()
{
	cout<<"                 ** Program to convert number into words **           \n\n";
    int input_num;
    cout<<"Enter a number : ";
    cin>>input_num;
    cout<<endl;
    change(input_num);
}

