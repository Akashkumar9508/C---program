#include<iostream>
using namespace std;
class Result
{
	public:
		char name[10];
		float roll;
		float math;
		float english;
		float science;
		float hindi;
		float total_marks;
		float total_percent;
		
		void input()
		{
			cout<<"enter your name:- ";
			cin>>name;
			cout<<"enter your roll:- ";
			cin>>roll;
			cout<<"enter your marks in math:- ";
			cin>>math;
			cout<<"enter your marks in english:- ";
			cin>>english;
			cout<<"enter your marks in science:- ";
			cin>>science;
			cout<<"enter your marks in hindi:- ";
			cin>>hindi;
			total_marks =math+english+science+hindi;
			total_percent=(total_marks/400)*100;
			
		}
		void output()
		{
			if(total_percent>=90)
			{
				cout<<"your total percent is= "<<total_percent;
				cout<<"\n";
				cout<<"you got A+ gread";
			}
			else if(total_percent>=60)
			{
				cout<<"your total percent is= "<<total_percent;
				cout<<"\n";
				cout<<"you got A gread";
			}
			else if(total_percent>=40)
			{
				cout<<"your total percent is= "<<total_percent;
				cout<<"\n";
				cout<<"you got B gread";
			}
			else if(total_percent>=30)
			{
				cout<<"your total percent is= "<<total_percent;
				cout<<"\n";
				cout<<"you got C gread";
			}
			else
			{
				cout<<"you are fail ";
				
			}
		}
		
};
int main()
{
	Result A1;
	A1.input();
	A1.output();
}