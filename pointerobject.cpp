WAP in C++ to demonstrate the use of pointers to objects
#include<iostream>
using namespace std;
class student
{
	private:
		int roll, marks1, marks2;
	public:
		void set(int x, int y, int z)
		{
			roll=x;
			marks1=y;
			marks2=z;
		}
		void get()
		{
			cout<<"Roll: "<<roll<<"   Marks1 : "<<marks1<<"   Marks2 : "<<marks2<<endl;
		}
		void add()
		{
			cout<<"Totals marks are "<<marks1+marks2<<endl;
		}
};
int main()
{
	student obj;
	student * ptr;
	ptr=&obj;
	ptr->set(1,40,45);
	cout<<"Printing student details "<<endl;
	ptr->get();
	ptr->add();
	
	
}
