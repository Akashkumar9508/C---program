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
			cout<<"hello collage class \n";
		}
		
};
class Teacher:public College{
	public:
		void tea()
		{
			cout<<"hello teacher class\n";
		}
		
};
class Student:public Teacher{
	public:
		void disp()
		{
			cout<<"hello student class\n";
		}
};


int main()
{
	Student s;
	s.show();
	s.info();
	s.tea();
	s.disp();
}