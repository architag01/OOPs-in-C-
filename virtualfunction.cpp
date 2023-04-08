// C++ Program to Demonstrate the Concept of Dynamic binding
// with the help of virtual function
#include <iostream>
using namespace std;

class A{
public:
	void call_Function() 
	{
		print();
	}
	void print()
	{
		cout << "Printing the Base class Content" << endl;
	}
};
class B: public A
public:
	void print() 
	{
		cout << "Printing the Derived class Content"
			<< endl;
	}
};
int main()
{
	A a;
	a.call_Function();
	B b;
	b.call_Function();
								
	return 0;
}
