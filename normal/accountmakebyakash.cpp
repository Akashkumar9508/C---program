#include<iostream>
using namespace std;
class Account{
	private:
		char fname[20];
		char lname[20];
		char full_name;
		long long Account_number;
		char account_type[20];
		float total_Balance;
		public: 
		void createaccount()
		{
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~WELCOME~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~\n\n";
			cout<<"\nLet's have a create your account \n";
			cout<<"Enter your first name :- \n";
			cin>>fname;
			cout<<"enter your last name:- ";
			cin>>lname;
			cout<<"We give a chance to create your own account number :- ";
			cin>>Account_number;
			cout<<" Which type of account you want  to own .\n We have three types\n 1 current account\n 2 Saving account \n 3 Sutudent account \nWhat's your Mood :-";
			cin>>account_type;
			cout<<" Enter a amount to diposit in your account :-";
			cin>>total_Balance;
			cout<<" Your total balance is ="<<total_Balance;
		} 
		void diposit()
		{
			int a;
			cout<<" \nIf you have a lot of money, Please diposit in our Bank\n .";
			cout<<"Enter your Amount, to diposit :- \n";
			cin>>a;
			total_Balance=total_Balance+a;
			cout<<"Your total balance is = "<<total_Balance;
		}
		void Withdrawl()
		{
			int b;
			cout<<"\n If you are suffring from money,\n Please use your money in our bank ";
			cout<<"\nEnter a amount to withdrawl :- ";
			cin>>b;
			total_Balance=total_Balance-b;
			cout<<"your left money in our bank is = "<<total_Balance;
		}
		void show_detail()
		{
			cout<<"\nyour name is :- "<<fname<<lname;
			cout<<"\nyour Account number is :- "<<Account_number;
			cout<<"\nyour Account type is :- "<<account_type;
			cout<<"\nyour total balance is = "<<total_Balance;
			//cout<<"your name is :- "<<name;
		}
};
		
int main()
{
	Account a1;


int choice;

	//  while loop to choose
	// options everytime
		cout << "\t                                       .... Create your account...";
		
	while (2) {
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~WELCOME~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~\n\n";
		cout << "Enter Your Choice\n";
	
		
		cout << "\tpress 1:create account\n";
		cout << "\tpress 2:Show detial\n";
		cout << "\tpress 3:for Withdraw Money\n";
		cout << "\tpress 4:Deposit Money\n";
		cout << "\tpress 5:for Cancel\n";
		cin >> choice;	
		switch(choice)
		{
			case 1:
					a1.createaccount();
					break;	
				case 2:
						a1.show_detail();
						break;
					case 3:
							a1.Withdrawl();
							break;
						case 4:
								a1.diposit();
								break;
							case 5:
								 exit(2);
								break;
							default:
								cout<<"enter valid choice/n";
							break;
		}
	}
	return 0;
}
