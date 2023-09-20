#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"i am a construstor\n";
		
		}
		void show()
			{
				cout<<"i am a function";
			}
};
int main()
{
	A a1;
	a1.show();
}