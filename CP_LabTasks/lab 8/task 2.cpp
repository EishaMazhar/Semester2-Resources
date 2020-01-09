#include <iostream>
using namespace std;
#include <cmath>

class PrimeNumber
{
	int pnum;

public:
	PrimeNumber():pnum(0)
	{
			
	}
	PrimeNumber(int num);
	
	static bool isPrime(int num);
	
	int getNum()
	{
		return pnum;
	};
	
	void setNum(int num);
	
	PrimeNumber& operator++(int);
	PrimeNumber& operator--(int);
};
bool PrimeNumber::isPrime(int num)
{
   

	if( (num % 2 == 0) || (num % 3 == 0) )
	return false;
		
	if(num <= 3)
	return true;

	int maxDivisor = std::sqrt(num);

	int divisor = 5;
	while (divisor <= maxDivisor)
	{
		if ( (num % divisor == 0) || (num % (divisor + 2) == 0) )
			return false;
		divisor += 6;
	}
	return true;
}

void PrimeNumber::setNum(int num)
{
	if(isPrime(num))
		pnum = num;
	else
	{
		cout << num << " this number is not prime. Defaulting it to 0.\n";
		pnum = 0;
	}
}	

PrimeNumber::PrimeNumber(int num)
{

	if(isPrime(num))
		pnum = num;
	else
	{
		cout << num << " this number is not prime. Defaulting it to 0.\n";
		pnum = 0;
	}
}

PrimeNumber& PrimeNumber::operator++(int)
{
	do 
	{
		this->pnum += 1;
	} 
	while (! PrimeNumber::isPrime(this->pnum));
}
PrimeNumber& PrimeNumber::operator--(int)
{
	do
	{    this->pnum-=1;
	}
	while(! PrimeNumber::isPrime(this->pnum));
}
int main()
{
	int eisha;
	cout << "Enter prime number: ";
	cin >> eisha;
	PrimeNumber p(eisha);
	p++;
	cout << "\nNext largest prime is " << p.getNum() << endl;
	p--;
	p--;
    cout << "\nNext smallest prime is " << p.getNum() << endl;
	return 0;
	
}
