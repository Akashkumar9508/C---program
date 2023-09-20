#include<iostream>
using namespace std;
class University{
	public:
		void show()
		{
			cout<<"this is university";
		}
		
};
class College:public University{
	public:
		void teacher()
		{
			cout<<"this is college";
		}
};
class Student:public College,public University{
	void output()
	{
		cout<<"this is student";
		
	}
};
int main()
{
	Student S1;
	S1.show();
	S1.teacher();
	S1.output();
}