#include<iostream>
using namespace std;
class Greater
{
	public:
		int a ;
		int b;
		int c;
		void input()
		{
			cout<<"enter 3 number";
			cin>>a>>b>>c;
		}
		void output()
		{
			if (a>b&&a>c)
			{
				cout<<"number 1 is greater";
			}
			else if(b>a&&b>c)
			{
				cout<<"number 2 is greater";
			}
			else
			{
				cout<<"number 3 is greater";
			}
		}
};
int main()
{
	Greater n1;
	n1.input();
	n1.output();
	
}