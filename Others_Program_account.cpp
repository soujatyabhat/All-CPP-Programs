#include<iostream>
using namespace std;
class account{
	public:
	char name[10];
	char account_type;
	int account_number;
	int balance_sav,balance_cur;
	account()
	{
		balance_sav = 0;
		balance_cur = 0;
	}
	void get_input()
	{
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Account Type:";
		cin>>account_type;
		cout<<"Account Number:";
		cin>>account_number;
	}
};
class cur_account:public account{
	int deposite,withdrawal;
	public:
		void get_balance_cur()
		{
			system("cls");
			cout<<"Enter Balance for current account  : ";
			cin>>deposite;
			balance_cur+=deposite;
		}
		void withdraw_balance_cur()
		{
			cout<<"Enter ammount for withdrawal: ";
			cin>>withdrawal;
			if(withdrawal < 1000)
				   {
				  		  balance_cur -=50;
						  cout<<"50 Rupees has been impose as fine";
				   }
			else
				   {
						  balance_cur-=withdrawal;
						  cout<<"Withdrawal is successfull!! Balance is : "<<balance_cur;
						  cout<<endl<<endl;
                    }
		}
		void display_cur()
		{
	        cout<<"Name: "<<name<<endl;
			cout<<"Account Number: "<<account_number<<endl;
			cout<<"Account Type : Current"<<endl;
			cout<<"The current Balance is: "<<balance_cur;
		}
};
class sav_account:public account{
	int deposite,withdrawal,inter;
		public:
		void get_balance_sav()
		{
			system("cls");
			cout<<"Enter Balance for savings account : ";
			cin>>deposite;
			balance_sav+=deposite;
		}
		void withdraw_balance_sav()
		{
			cout<<"Enter ammount for withdrawal: ";
			cin>>withdrawal;
			if(withdrawal <= 500)
		 	cout<<"Deposite not possible"<<endl;
			else
   			{
		 	balance_sav-=withdrawal;
	  		cout<<"Withdrawal is successfull!! Balance is : "<<balance_sav;
 		  cout<<endl<<endl;
            }
		}
		void interest()
		{
			int r=2,t,interest;
			cout<<"Enter Interest : ";
			cin>>t;
			inter = ((balance_sav * t * r )/100);
			balance_sav+= inter;
			cout<<"The interest is: "<<inter;
	  		cout<<endl<<endl;
		}
		void display_sav()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Account Number: "<<account_number<<endl;
			cout<<"Account Type : Savings";
			cout<<"The Balance is : "<<balance_sav<<endl;
			
		}
		
};
int main()
{
	account obj;
	account obj_two;
	obj_two.get_input();
	sav_account obj_three;
	cur_account obj_four;
	if(obj_two.account_type == 'c')
	{
		obj_four.get_balance_cur();
		obj_four.withdraw_balance_cur();
		obj_four.display_cur();
	}
	else if(obj_two.account_type == 's')
	{
		obj_three.get_balance_sav();
		obj_three.withdraw_balance_sav();
		obj_three.interest();
		obj_three.display_sav();
	}
	else
	{
		cout<<"Input is not exists"<<endl;
	}
return 0;
}
