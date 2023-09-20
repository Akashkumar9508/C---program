#include<iostream>
#include<string.h>
using namespace std;
string name[30],clas[30],course[30],admission_year[30];
long int roll_no[30];
int moblie_no;
int total=0;

void enter() {
	int ch=0;
	cout<<"*******************************************";
	cout<<"BOKARO STEEL CITY COLLEGE BOKARO";
	cout<<"********************************************\n";
	cout<<"how many student do you want to enter ??"<<endl;
	cin>>ch;
	if(total=0) {
		total=ch+total;
		for(int i=0; i<ch; ++i) {
			cout<<"\n enter the data of student :"<<i+1<<endl;
			cout<<"enter roll_no :"<<endl;
			cin>>roll_no[i];
			cout<<"enter name of student :"<<endl;
			cin>>name[i];
			cout<<"enter class :"<<endl;
			cin>>clas[i];
			cout<<"enter course :"<<endl;
			cin>>course[i];
			cout<<"Enter mobile number :"<<endl;
			cin>>moblie_no;
			cout<<"Enter admission year :"<<endl;
			cin>>admission_year[i];

		}

	} else {
		for(int i=total; i<ch+total; ++i) {
			cout<<"\n Enter data of student :"<<i+1<<endl;
		    cout<<"enter roll no :"<<endl;
			cin>>roll_no[i];
			cout<<"enter name :"<<endl;
			cin>>name[i];
			cout<<"enter class :"<<endl;
			cin>>clas[i];
			cout<<"enter course :"<<endl;
			cin>>course[i];
			cout<<"enter mobile number :"<<endl;
			cin>>moblie_no[i];
			cout<<"enter admission year :"<<endl;
			cin>>admission_year[i];
		}
		total=total+ch;
	}
	system("CLS");
}
void show(){
	if(total==0)
	{
		cout<<"no data is entered :"<<endl;
	}
	else 
	{
		for(int i=0;i<total;++i)
		{
			cout<<"\n Enter data of student :"<<i+1<<endl;
			cout<<"roll no :"<<roll_no[i]<<endl;
			cout<<"name :"<<name[i]<<endl;
			cout<<"class :"<<clas[i]<<endl;
			cout<<"course :"<<course[i]<<endl;
			cout<<"mobile number :"<<moblie_no<<endl;
	        cout<<"admission year :"<<admission_year[i]<<endl;
		}
	}
}
void search()
{
	string rollno;
	cout<<"enter roll no of student :"<<endl;
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==roll_no[i])
		{
			cout<<"\n Enter data of student :"<<i+1<<endl;
			cout<<"roll no :"<<roll_no[i]<<endl;
			cout<<"name :"<<name[i]<<endl;
			cout<<"class :"<<clas[i]<<endl;
			cout<<"course :"<<course[i]<<endl;
			cout<<"mobile number :"<<moblie_no<<endl;
	        cout<<"admission year :"<<admission_year[i]<<endl;
		}
	}
}
void update()
{
	if(total==0)
	{
		cout<<"no data is enterd :P"<<endl;
	}
	else
	{
		string rollno;
		cout<<"enter roll mo:";
			cin>>rollno;
		for(int i=0;i<total;++i)
		{
			
			if(rollno==roll_no[i])
			{
				cout<<"\n Enter data of student :"<<i+1<<endl;
			cout<<"roll no :"<<roll_no[i]<<endl;
			cout<<"name :"<<name[i]<<endl;
			cout<<"class :"<<clas[i]<<endl;
			cout<<"course :"<<course[i]<<endl;
			cout<<"mobile number :"<<moblie_no<<endl;
	        cout<<"admission year :"<<admission_year[i]<<endl;
	        cout<<"enter new data :"<<endl;
	        cout<<"enter roll no :"<<endl;
			cin>>roll_no[i];
			cout<<"enter name :"<<endl;
			cin>>name[i];
			cout<<"enter class :"<<endl;
			cin>>clas[i];
			cout<<"enter course :"<<endl;
			cin>>course[i];
			cout<<"enter mobile number :"<<endl;
			cin>>moblie_no[i];
			cout<<"enter admission year :"<<endl;
			cin>>admission_year[i];
			}
		}
	}
}
void deleate(){
	if(total==0){
		cout<<" no data enterd yet"<<endl;
	}
	else
	{
		int a;
		cout<<"are you sure to delete data ??"<<endl;
		cout<<"press 1 to delete all data "<<endl;
		cin>>a;
		if(a==1){
			cout<<"all record are delete....!";
		}
		else{
			cout<<"please press 1 to delete all records"<<endl;
		}
	}
}
int main()
{
	int value;
	while(1)
	{
		cout<<"*******************************************";
		cout<<"BOKARO STEEL CITY COLLEGE BOKARO";
		cout<<"********************************************\n";
		cout<<"\npress 1 to enter data "<<endl;
		cout<<"\npress 2 to show data "<<endl;
		cout<<"\npress 3  to search data "<<endl;
		cout<<"\npress 4  to update data"<<endl;
		cout<<"\npress 5  to delete data "<<endl;
		cout<<"\npress 6  to to quit"<<endl;
		cin>>value;
		switch(value)
		{
			case 1:
			enter();	
			break;
			case 2:
			show();	
			break;
			case 3:
			search();	
			break;
			case 4:
			update();	
			break;
			case 5:
			deleate();	
			break;
			case 6:
			exit(0);	
			break;
			default:
				cout<<"invalid input"<<endl;
				 break;
		}
	}
}