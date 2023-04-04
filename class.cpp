// C++ program to demonstrate accessing of data members
#include <bits/stdc++.h>
using namespace std;
class Student {
	// Access specifier
public:
	// Data Members
	string studentname;
	// Member Functions()
	void printname() { cout << "Studentname is:" << studentname; }
};
int main()
{
	
	Student obj1;
	
	obj1.studentname = "Abhi";
	obj1.printname();
	return 0;
}
