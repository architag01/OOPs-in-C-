//WAP in C++ to demonstrate the concept of arrays within a class
#include<iostream>
using namespace std;
class student
{
	private:
		int roll, marks[5];
	public:
		void set(int x, int arr[]);
		void get();
		void add();
			
};
void student::set(int x, int arr[])
{
	roll=x;
	int i;
	for(i=0;i<5;i++)
	{
		marks[i]=arr[i];
	}
}
void student::get()
{
	cout<<"Printing Studentd Details: "<<endl;
	cout<<"Roll no. "<<roll<<endl;
	cout<<"Marks in five subjects are "<<endl;
	int i;
	for(i=0;i<5;i++)
	{
		cout<<marks[i]<<endl;
	}
}
void student::add()
{
	int i, sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	cout<<"Total marks are : "<<sum<<endl;
}


int main()
{
	int a, arr[5];
	cout<<"Enter roll no "<<endl;
	cin>>a;
	cout<<"Enter marks in five subjects "<<endl;
	int i;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	student obj;
	obj.set(a,arr);
	obj.get();
	obj.add();
	
	
}
