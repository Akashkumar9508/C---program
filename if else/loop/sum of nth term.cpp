//sum of nth term//
#include<iostream>
using namespace std;
class Sum
{
	public:
		int n;
		int a;
		int sums=0;
		void result()
		{
			cout<<"enter the last term of number:- ";
			cin>>n;
			cout<<"the number are\n";
			for(a=1;a<=n;a++)
			{
				
				cout<<"\n"<<a;
				sums=sums+a;
			}
			cout<<"\nthe sum between nth term is = "<<sums;
		}
};
int main()
{
	Sum s1;
	s1.result();
}