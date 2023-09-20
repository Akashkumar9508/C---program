#include<iostream>
using namespace std;
class Fibo
{
	public:
		int f=0;
		int s=1;
		int next;
		void display()
		{
		while(s<100)
		{
			cout<<s<<" ";
			next=f+s;
			f=s;
			s=next;
			}	
		}
};
int main()
{
	Fibo f;
	f.display();
}