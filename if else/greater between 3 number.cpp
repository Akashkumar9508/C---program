//geater between three number//
#include<iostream>
using namespace std;
class Check{
	public:
		int n1;
		int n2;
		int n3;
		void display()
		{
			cout<<"enter your first number:- ";
			cin>>n1;
			cout<<"enter your second number:- ";
			cin>>n2;
			cout<<"enter your third number :- ";
			cin>>n3;
			if(n1>n2&&n1>n3)
			{
				cout<<"greater number is = "<<n1;
			}
			else if(n2>n1&&n2>n3)
			{
				cout<<"greater number is = "<<n2;
			}
			else
			{
				cout<<"greater number is = "<<n3;
			}
		}
};
int main()
{
	Check c2;
	c2.display();
}