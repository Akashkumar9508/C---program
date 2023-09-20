#include<iostream>
using namespace std;
class Akash{
	private:
		int num1;
		int num2;
	public:
		int n1;
		int n2;
	Akash(int n1, int n2)
	{
		cout<<"delete constructor";
		num1=n1;
		num2=n2;
	}	
	void show()
	{
		cout<<"num1 is = "<<num1;
		cout<<"num2 is = "<<num2;
	}
	~Akash()
	{
		cout<<" inside the destructor";
	}
};
int main()
{
	Akash a2;
	a2.show();
	Akash a2(10,20);
	return 0;
		
}