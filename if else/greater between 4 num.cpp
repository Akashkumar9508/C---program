#include<iostream>
using namespace std;
class Check{
	public:
		int n1;
		int n2;
		int n3;
		int n4;
		void result()
		{
		cout<<"enter the first number:- ";
		cin>>n1;
		cout<<"enter the second number:- ";
		cin>>n2;
		cout<<"enter the third number:- ";
		cin>>n3;
		cout<<"enter the fourth number :- ";
		cin>>n4;
		if(n1>n2&&n1>n3&&n1>n4)
		{
			cout<<"greater number is = "<<n1;
		}
		else if(n2>n1&&n2>n3&&n2>n4)
		{
			cout<<"greater number is = "<<n2;
		}
		else if(n3>n1&&n3>n2&&n3>n4)
		{
			cout<<"greater number is = "<<n3;
		}
		else
		{
			cout<<"greater number is = "<<n4;
		}
		}
		
};
int main()
{
	Check c1;
	c1.result();
}