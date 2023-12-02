#include <iostream>
using namespace std;
int main(){
	int numworkers, numcements, tonsofsand, buildingblocks;
	
	double costperblock=40.0;
	double costperworkerperday=700.0;
	double costpercementbag=650.0;
	double costpertonofsand=1000.0;
	double auxiliarybudget=200000.0;
	
	//input data//
	cout<<"enter the number of constructers required for two months: "<<endl;
	cin>>numworkers;
	
	cout<<"enter the number of cement bags required"<<endl;
	cin>>numcements;
	
	cout<<"enter the tons of sand required"<<endl;
	cin>>tonsofsand;
	
	cout<<"enter the number of building blocks required"<<endl;
	cin>>buildingblocks;
	
	//calculate the total cost//
	 double totalcost=(costperworkerperday*60*2*numworkers)+(costpercementbag*numcements)+
	 (costpertonofsand*tonsofsand)+(costperblock*buildingblocks)+auxiliarybudget;
	 
	 //output the approxiamte total cost//
	 
	 cout<<"Approximate total cost of construction: "<< totalcost << "ksh" << endl;
	 return 0;
	
	
}
