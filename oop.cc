#include <iostream>

using std::string;

class Employee{
	private:
		string Name;
		string Company;
		int Age;
		
	void IntroduceYourself(){
		std::cout <<"Name -"<< Name <<std::endl;
		std::cout <<"Company -"<< Company <<std::endl;
		std::cout <<"Age -" << Age <<std::endl;
	}
	public:
		void setName(string name) {
			Name = name;
		}
	     string getName(){ 
	     	return Name;
	     	}
		void setCompany(){
			Company= company;
		}
		string getCompany(){
			return Company;
		}
		void setAge(int age){
			Age= age;
		}
		int getAge(){
			return Age;
		
		} 
		void IntroduceYourself()
		Employee(string name, string company, int age);
			 
	
	
};
int main(){
	Employee employee1=Employee("Lewis","Amazon",21 );
	employee1.IntroduceYourself();
	
	Employee employee2=Employee("Mark","Apple", 26);
	employee2.IntroduceYourself();
	
	employee1.setAge(39);
	std::cout<<employee1.getName()<<"is" <<employee1.getAge()<< "years old" << std::endl;
	
	
}
