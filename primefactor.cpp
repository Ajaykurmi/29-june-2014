/*2 question: If you take all the numbers that contain the digits 1 to 9 exactly once, and you write down the prime factorization of all those numbers, 
which one has the smallest biggest prime factor?

To illustrate what I mean, the number 879456123 contains the prime factors 3 7 13 and 491; making 491 this numbers biggest prime factor.

The number 213456789 contains 3 7 13 and 197 as factors, making 197 the biggest prime factor. Out of all the numbers I've tried, 213456789 has the smallest biggest
 prime factor.

Many other number have much bigger biggest prime factors, like 576492813 which contains 3 13 19 and 13649.*/
#include<iostream>
using namespace std;

class primeFactor{
public:
	primeFactor(){
		
	}

	//
	long* getFactors(long primeVal) {
		long i,j;
		bool minEmp=true;
		// 0 pos for least prime factor
		// 1 pos for biggest prime factor
		long primeValues[2];
		if(isPrime(primeVal)) {
			primeValues[0]=primeVal;
			primeValues[1]=primeVal;
			return primeValues;
		}
		

		for (i = 2; i<primeVal; ++i)
		{
			for (j = 2; j < i; ++j)
			{
				if(i%j==0) {
					break;
				}
			}
			if(i==j) { 
				if(primeVal%i==0) {   // divisual factor is here
					primeVal = primeVal/i;
					if(minEmp) {
						primeValues[0]=i;
						minEmp=false;					
					}

					i=1; // re initilizing array with one
					if(isPrime(primeVal)) {	
						primeValues[1]=primeVal;					
						return primeValues;
					}
					
				}
			}
		}
		//return primeValues;
	}

	
	bool isPrime(long no){
		long i;
		for (i = 2; i < no; ++i)
		{
			if(no%i==0) {
				break;
			}
		}
		if(i==no)
			return true;
		else
			return false;
	}
};

void main(){
	primeFactor pf;
	long value;
	cout<<"Enter a value for finding prime factorization=";
	cin>>value;
	long *factorss;
	factorss = pf.getFactors(value);
	
	cout<<"\nLeast prime Factor is\n ";
	cout<<factorss[0];

	cout<<"\nBiggest prime Factor is\n";

	cout<<factorss[1];
	
	// best case of this program is n if no is alreay prime no or less than 3
	// worst case of this program n(n+n) : O(n square)
}