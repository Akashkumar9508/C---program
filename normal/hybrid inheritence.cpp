#include<iostream>
using namespace std;
class A{
	public:
		int y=4;
	
};
class B{
	public:
		int x=3;
		
};
class C:public A,public B{
	public:
		void sum()
		{
			cout<<"the sum of x and y is = "<<x+y;
		}
};
int main()
{
	C c1;
	c1.sum();
}