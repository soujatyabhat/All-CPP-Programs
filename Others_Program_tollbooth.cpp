#include<iostream>
using namespace std;
class tollbooth{
	unsigned int no_of_car;
	double ammount;
	public:
	tollbooth()
	{
		no_of_car=0;
		ammount=0;
	}
	int payingcar()
	{
		no_of_car++;
		ammount+=0.5;
	}
	int nonpayingcar()
	{
	 	no_of_car++;
	}
	void display()
	{
	 cout<<"The number of car: "<<no_of_car<<endl;
	 cout<<"The ammount : "<<ammount<<endl;
	}
};
int main()
{
tollbooth obj;
int n;
while(1)
{
	cout<<"Enter your choose (1) Paying car (2) Paying (3) Display (4) Exit: ";
	cin>>n;
	switch(n){
		case 1:
				 obj.payingcar();
				 break;
		case 2:
				 obj.nonpayingcar();
				 break;
		case 3:
				 obj.display();
				 break;
		case 4:
				 exit(0);
	}
	
}
	
return 0;
}
