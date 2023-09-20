#include<iostream>
using namespace std;
class Check{
	public:
		char ch;
		void display()
		{
			cout<<"enter a alphabate between A to Z :- ";
			cin>>ch;
			if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='u')
			{
				cout<<"Vowel";
			}
			else
			{
				cout<<"consonent";
			}
		}
};
int main()
{
	Check c1;
	c1.display();
}