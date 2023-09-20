#include<iostream>
using namespace std;
class Check
{
	public:
		int a;
		void display()
		{
		cout<<"enter a no ";
		cin>>a;
		if(a%2==0)
		cout<<"the no is even :";
		else
		cout<<"the no is odd :"	;
		}
};
int main()
{
	Check a1;
	a1.display();
}
