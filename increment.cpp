//increment operator ++//
//simple increment//

#include <iostream>
using namespace std;
int main(){
	int counter =10;
	int result =0;
	
	cout<<"counter :"<< counter <<endl;
	
	counter= counter + 1;
	
	cout<<"counter :"<<counter <<endl;
	
	counter++;
	cout<<"counter :"<< counter <<endl;
	
	++counter;
	cout<<"counter :"<< counter <<endl;
	
	cout<<"----------------------------------"<<endl;
	
	//preincrement//
	counter = 10;
	result =0;
	
	
	cout<<"counter :"<< counter <<endl;
	
	result= ++counter; //note the preincrement//
	cout<<"counter :"<<counter <<endl;
	cout<<"result :"<<result<< endl;
	
	cout<<"-----------------------------------"<<endl;
	
	//post-increment//
	counter= 10;
	result= 0;
	
	cout<<"counter :"<< counter << endl;
	
	result= counter++; //note the pos-increment//
	
	cout<< "counter :"<<counter <<endl;
	cout<< "result : "<<result << endl;
	
	cout<<"-----------------------------------"<<endl;
	
	counter=10;
	result=0;
	
	cout<< "counter :"<< counter << endl;;
	result= ++counter + 10; //note the pre-increment//
	
	 cout<< "counter :"<< counter <<endl;
	 cout<< "result :"<< result <<endl;
	 
	 
	
	cout<<"------------------------------------"<<endl;
	
	//post-increment//
	counter= 10;
	result = 0;
	
	cout<<"counter :" << counter <<endl;
	
	result= counter++ + 10; //note the post-increment//
	
	cout<<"counter :"<< counter <<endl;
	cout<<"result :"<<result <<endl;
		
	return 0;
}
