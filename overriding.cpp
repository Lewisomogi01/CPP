#include <iostream>
using namespace std;
class parent
{
	public:
		void print()
		{
			cout<<"this is the function of base class"<<endl;
		}
	};
	class child: public parent{
		public:
			void print()
			{
				cout<<"this is the function of derived class"<<endl;
			}
	};
     int main()
     {
     	child obj;
     	obj.print();
     	
	return 0;
}
