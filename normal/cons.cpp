#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"\nthe is a default ";
			
		}
		void show()
		{
			cout<<"\nthis is a functin";
			
		}
		A(int a,int b)
		{
			cout<<"\nthe sum is ="<<a+b;
		}
		A(float a)
		{
			cout<<"\nthe area of circle is ="<<(3.14*a*a);
		}
		
};
int main()
{
	A a1;
	a1.show();
	A b1(20,10);
	A c1(7.1);
}