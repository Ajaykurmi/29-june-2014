/*
Q1: Write a function that takes three points in the x,y plane and determines if they are collinear; be sure to handle vertical lines and horizontal lines properly
	//findcolinear.cpp
*/
#include<iostream>
using namespace std;
class findcolinear {
	public: findcolinear(){

	}

	bool checkColinear1(float** arr,int totalPoints){
		float m;
		float slopeBack;
		int i;
		bool isCoollinear=true;
		for (i = 0; i < totalPoints; ++i)
		{
			if((i+1)!=totalPoints) {
				m= (arr[i+1][1]-arr[i][1])==0 || (arr[i+1][0]-arr[i][0])==0?0:(arr[i+1][1]-arr[i][1])/(arr[i+1][0]-arr[i][0]);
 			} else {
 				m= (arr[0][1]-arr[i][1])==0||(arr[0][0]-arr[i][0])==0?0:(arr[0][1]-arr[i][1])/(arr[0][0]-arr[i][0]);
 			}
 			if(i!=0) {
 				if(slopeBack!=m) {
 					isCoollinear=false;
 					break;
 				}
 			}
			
			slopeBack=m;
		}
		return isCoollinear;
	}
};
void main(){
	
	int totalPoints;
	float** ary;
	cout<<"How much points you have in your plain(In integer)?";
	if(cin>>totalPoints) {
		// creating memory in heap using new keyword
		ary = new float*[totalPoints];
		for(int i = 0; i < totalPoints; ++i)
    		ary[i] = new float[2];
    	int i;
    	for (i = 0; i < totalPoints; ++i)
    	{
    		float x,y;
    		// insert value into x axis
    		cout<<"Enter value for x"<<(i+1)<<" ";
    		if(cin>>x) {
    			ary[i][0] = x;
    		} else {
    			
    			break;
    		}
    		// insert value into y axis
    		cout<<"Enter value for y"<<(i+1)<<" ";
    		if(cin>>y) {
    			ary[i][1] = y;
    		} else {
    			break;
    		}

    	}
    	if(i!=totalPoints) {
    		cin.clear();
    			for(int i = 0; i < totalPoints; ++i) {
    				delete [] ary[i];
				}
				delete [] ary;
    			cout<<"Wrong input provided only number are allowed, please try form the beginning";
    			exit(0);
    	} else{
    		findcolinear fc;
    		if(fc.checkColinear1(ary,totalPoints))
    			cout<<"Points are coolinear";
    		else
    			cout<<"Points are not coolinear";
			//cout<<"All Poits has been insrted successfully";
			// clearing hea memory
    		for(int i = 0; i < totalPoints; ++i) {
    				delete [] ary[i];
				}
				delete [] ary;
    	}
    	

	} else {
		cin.clear();
	}

	
	//for(int i = 0; i < sizeX; ++i)
    	//ary[i] = new int[sizeY];

	//if(fc.checkColinear(x1,y1,x2,y2,x3,y3)) {
		//cout <<"points are collinear";
	//} else 
	//	cout <<"points are not collinear";
}
