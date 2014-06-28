/*
6 question: Return a list containing only one copy of any duplicates in an input list, with items in the output in the same order as their first
appearance in the input.

Your task is to answer the interview question given above; you must provide at least two different solutions.
*/
#include<iostream>
using namespace std;
class duplicateCopy
{
public:
	//duplicateCopy();
	//~duplicateCopy();
	char* getDuplilcateCopy1(char* str){
		char *dynamic;
		int counter=0;
		int repeatCount=0;
		bool notExists=true;
		dynamic = (char *) malloc(sizeof(char));
		for (int i = 0; str[i]!='\0'; ++i)
		{
			for (int j = i; str[j]!='\0'; ++j)
			{
				if(i==j)
					continue;

				if(str[i]==str[j]) {
					repeatCount++;
					break;
				}
			}
			if(repeatCount>0) {
				for (int k = 0; k<counter; ++k)
				{
					if(str[i]==dynamic[k]) {
						notExists=false;
						break;
					}		
				}
				if(notExists) {
					//cout<<"in cond";
					dynamic[counter]= str[i];
					counter++;
				} 
				notExists= true;
				repeatCount=0;
			}
		}
		dynamic[counter]= '\0';
		return dynamic;
	}
};

void main(){
	//char str[] = "ajaysinghkurmipaitel";
	char str[100];
	cout<<"Please enter string:";
	cin>>str;
	duplicateCopy dc;
	char* value=dc.getDuplilcateCopy1(str);
	printf("\nDuplicated charaters are: %s\n", value);
}