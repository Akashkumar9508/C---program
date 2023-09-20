#include<iostream>
using namespace std;
class Student{
	public:
		int roll;
		int age;
		int math;
		int english;
		int science;
		float avg;
		char name[20];
		char address[20];
		void input()
		{
		cout<<"enter your name:= ";
		cin>>name;
		cout<<"enter your roll:= ";
		cin>>roll;
		cout<<"enter your address:= ";
		cin>>address;
		cout<<"enter your marks in math:=";
		cin>>math;
		cout<<"enter your marks in english:= ";
		cin>>english;
		cout<<"enter your marks in science:= ";
		cin>>science;
		cout<<" your detial is :=  \n";
	    }
		void average()
		{
			avg=(math+english+science)/3.0;
			cout<<avg;
		}
		void output()
		{
			cout<<"\nyour name is := "<<name;
			cout<<"\nyour roll is := "<<roll;
			cout<<"\nyour address is := "<<address;
			cout<<"\nyour marks in math is :="<<math;
			cout<<"\nyour marks in english is :="<<english;
			cout<<"\nyour maeks in science is :="<<science;
			cout<<"\navg is := "<<avg;
			}
};
int main()
{
	Student s1;
s1.input();
s1.average();
s1.output();
}