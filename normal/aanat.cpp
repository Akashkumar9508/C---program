#include<iostream>
#include<string.h>
using namespace std;
class Database{
	protected:
    int roll_no;
    string name;
    string sem;
    string course;
    int admission_year;
    long int moblie_no ;
	int how_many_student=0;
    int total = 0;
	int i;
	int rollno;
public:
void enter() {
	cout<<"*******************************************";
	cout<<"BOKARO STEEL CITY COLLEGE BOKARO";
	cout<<"********************************************\n";
	cout<<"how many student do you want to enter ??"<<endl;
	cin>>how_many_student;
	if(total==0) {
		total+=how_many_student;
		for(i=0; i<how_many_student; i++) 
		{
			cout<<"\n enter the data of student :"<<i+1<<endl;
			cout<<"enter roll_no :"<<endl;
			cin>>roll_no;
			cout<<"enter name of student :"<<endl;
			cin>>name;
			cout<<"enter sem :"<<endl;
			cin>>sem;
			cout<<"enter course :"<<endl;
			cin>>course;
			cout<<"Enter mobile number :"<<endl;
			cin>>moblie_no;
			cout<<"Enter admission year :"<<endl; 
			cin>>admission_year;
		}
	} 
    else 
    {
		for(i=total; i<how_many_student+total; i++) 
		{
			cout<<"\n Enter data of student :"<<i+1<<endl;
		    cout<<"enter roll no :"<<endl;
			cin>>roll_no;
			cout<<"enter name :"<<endl;
			cin>>name;
			cout<<"enter sem :"<<endl;
			cin>> sem;
			cout<<"enter course :"<<endl;
			cin>>course;
			cout<<"enter mobile number :"<<endl;
			cin>>moblie_no;
			cout<<"enter admission year :"<<endl;
			cin>>admission_year;
		}
		total=total+how_many_student;
	}
	// system("CLS");
}
};
class Databsae_2:public Database{
	public:
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
			cout<<"roll no :"<<roll_no<<endl;
			cout<<"name :"<<name<<endl;
			cout<<"sem :"<<sem<<endl;
			cout<<"course :"<<course<<endl;
			cout<<"mobile number :"<<moblie_no<<endl;
	        cout<<"admission year :"<<admission_year<<endl;
		}
	}
}
};
class Database_3:public Databsae_2{
	public:
	void search()
{
	cout<<"enter roll no of student :"<<endl;
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==roll_no)
		{
			cout<<"\n Enter data of student :"<<i+1<<endl;
			cout<<"roll no :"<<roll_no<<endl;
			cout<<"name :"<<name<<endl;
			cout<<"sem :"<<sem<<endl;
			cout<<"course :"<<course<<endl;
			cout<<"mobile number :"<<moblie_no<<endl;
	        cout<<"admission year :"<<admission_year<<endl;
		}
	}
}
};
class Database_4:public Database_3{
	public:
	void update()
{
	if(total==0)
	{
		cout<<"no data is enterd :P"<<endl;
	}
	else
	{
		cout<<"enter roll mo:";
			cin>>rollno;
		for(int i=0;i<total;++i)
		{
			
			if(rollno==roll_no)
			{
			cout<<"\n Enter data of student :"<<i+1<<endl;
			cout<<"roll no :"<<roll_no<<endl;
			cout<<"name :"<<name<<endl;
			cout<<"sem :"<<sem<<endl;
			cout<<"course :"<<course<<endl;
			cout<<"mobile number :"<<moblie_no<<endl;
	        cout<<"admission year :"<<admission_year<<endl;
	        cout<<"enter new data :"<<endl;
	        cout<<"enter roll no :"<<endl;
			cin>>roll_no;
			cout<<"enter name :"<<endl;
			cin>>name;
			cout<<"enter sem :"<<endl;
			cin>>sem;
			cout<<"enter course :"<<endl;
			cin>>course;
			cout<<"enter mobile number :"<<endl;
			cin>>moblie_no;
			cout<<"enter admission year :"<<endl;
			cin>>admission_year;
			}
		}
	}
}
};
class Database_5:public Database_4{
	public:
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
};
int main()
{
	Database_5 obj;
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
			obj.enter();	
			break;
			case 2:
			obj.show();	
			break;
			case 3:
			obj.search();	
			break;
			case 4:
			obj.update();	
			break;
			case 5:
			obj.deleate();	
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