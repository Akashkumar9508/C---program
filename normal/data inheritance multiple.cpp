#include<iostream>
using namespace std;
class University{
	public:
		void show()
		{
			cout<<"hello parant class\n";
		}
};
class College:public University{
	public:
		void info()
		{
			cout<<"hello college class \n";
		}
		
};
class Student:public University{
	public:
		void disp()
		{
			cout<<"hello student class\n";
		}
};



int main()
{
	College c;
	Student s;
	c.show();
	c.info();
	s.show();
	s.disp();
	return 0;
}