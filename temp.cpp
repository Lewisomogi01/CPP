#include <iostream>
using namespace std;
int main(){
	cout<<"a program to convert temperature in faranheit to celcius"<<endl;
	double celcius;
	int faranheit;
	cout<<"enter temperature in faranheit:"<<endl;
	cin>>faranheit;
	
	celcius=0.5*(faranheit-32);
	cout<<"the temp is "<< celcius << " degrees celcius"<<endl;
	
	return 0;
}
