#include <iostream>
using namespace std;
int main(){
	int length;
	int width;
	int height;
	int base;
	double area;
	double ans;

	cout<<"a program to calculate the area of  a rectangle and triangle:"<<endl;
	
	cout<<"enter the length of the rectangle"<<endl;
	cin>>length;
	
	cout<<"enter the width of the rectangle"<<endl;
	cin>>width;
	area=length*width;
	
	cout<<"the area of the rectangle is "<<area<< "cm square"<<endl;
	cout<<"--------------------------------------------"<<endl;
	
	cout<<"enter the height of the triangle:"<<endl;
	cin>>height;
	
	cout<<"enter the base of the triangle:"<<endl;
	cin>>base;
	
	ans=0.5*base*height;
	cout<<"the area of the triangle is" << ans << "cm square"<<endl;
	
	return 0;
}

