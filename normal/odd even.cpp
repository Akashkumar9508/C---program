#include<iostream>
using namespace std;
class number
{
	public:
		int a;
		void display()
		{
			cout<<"enter a number";
			cin>>a;
			if(a/2==0)
			{
				cout<<"the number is even";
				
			}
			else
			{
				cout<<"the number is odd";
			}
		}

};
int main()
{
	number d;
	d.display();
}