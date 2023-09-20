#include<iostream>
using namespace std;
class Teacher{
	public:
		void show()
		{
			cout<<"hello parant class\n";
		}
};
class Student:public Teacher{
	public:
		void disp()
		{
			cout<<"hello child class \n";
		}
		
};
int main()
{
	Student s;
	s.disp();
	s.show();
}