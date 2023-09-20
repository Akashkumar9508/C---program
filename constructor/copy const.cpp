#include<iostream>
using namespace std;
class Leader{
	public:
		int n1;
		int n2;
		Leader(int num1, int num2)//const
		{
			cout<<"\nsum is ="<<num1+num2;
			n1=num1;
			n2=num2;
		}
		Leader(Leader &t)
		{
			n1=t.n1;
			n1=t.n2;
			cout<<" \n after copy constructor sub is ="<<n1-n2;
		}
};
int main()
{

	Leader l1(30,20);
	Leader l2(l1);
	

}