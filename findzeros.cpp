/* 
5 question: For a given n, count the total number of zeros in the decimal representation of the positive integers less than or equal to n. 
For instance, there are 11 zeros in the decimal representations of the numbers less than or equal to 100, 
in the numbers 10, 20, 30, 40, 50, 60, 70, 80, 90, and twice in the number 100. Expect n to be as large as 1010,000.
*/
#include<iostream>
using namespace std;
class findZeros
{
public:
	
	int calcZeros(long number){
		int counter=0;
		long tempNo;
		for (int i = 10; i <=number; i++)
		{
			tempNo=i;
			while(tempNo>=10) {
				if(tempNo%10==0)
					counter++;
				//else break;
				tempNo=tempNo/10;	
			}

		}
		return counter;
	}
	/* data */
};

void main()
{
	findZeros fz;
	int counts;
	int inputVal;
	cout<<"Enter a value for counting zeros";
	cin>>inputVal;
	counts = fz.calcZeros(inputVal);
	cout<<"/nTotal Zeros are=";
	cout<<counts;

	// Total Zero counts for 1010,000 is 142193
	// Total complexity for this progream is n * (log(n)+log(n)) =  
}