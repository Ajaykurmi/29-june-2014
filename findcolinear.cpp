/*
Q1: Write a function that takes three points in the x,y plane and determines if they are collinear; be sure to handle vertical lines and horizontal lines properly
	//findcolinear.cpp
*/
#include<iostream>
using namespace std;
class findcolinear {
	public: findcolinear(){

	}

	bool checkColinear(float x1,float y1,float x2,float y2,float x3,float y3) {
		// testing coolinear using slope formulla
		float m1,m2,m3;
		m1=(y2-y1);
		//cout<<m1;
		m1= (y2-y1)==0?0:(y2-y1)/(x2-x1);
		m2=(y3-y2)==0?0:(y3-y2)/(x3-x2);
		m3=(y1-y3)==0?0:(y1-y3)/(x1-x3);
		
		if(m1==m2 && m2==m3)
			return true;
		return false;
	}
};
void main(){
	float x1;
	float y1;
	float x2;
	float y2;
	float x3;
	float y3;

	findcolinear fc;
	cout<<"Enter value for  x1=";
	cin>>x1;
	cout<<"Enter value for y1=";
	cin>>y1;

	cout<<"Enter value for x2=";
	cin>>x2;
	cout<<"Enter value for y2=";
	cin>>y2;

	cout<<"Enter value for x3=";
	cin>>x3;
	cout<<"Enter value for y3=";
	cin>>y3;

	if(fc.checkColinear(x1,y1,x2,y2,x3,y3)) {
		cout <<"points are collinear";
	} else 
		cout <<"points are not collinear";
}