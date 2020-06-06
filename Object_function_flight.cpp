#include<iostream>
using namespace std;
class flight{
	int fltnum;
	char destination[10];
	float fuel,distance;
	int  CALFUEL(int n)
		 {
		 	if(n <= 1000)
				 return 500;
			 else if(n<=1000 && n>=2000)
				  return 1100;
			 else
				 return 2000;
         }
	public:
		   void FEEPINFO()
		   {
		   	cout<<"Flight Number: ";
		   	cin>>fltnum;
		   	cout<<"Enter Destination : ";
		   	cin>>destination;
		   	cout<<"Enter Distance :";
		   	cin>>distance;
			fuel= CALFUEL(distance);
		   }
		   void SHOWINFO()
		   {
		   	system("cls");
		   	cout<<"FLight Number: "<<fltnum<<endl;
		   	cout<<"Destination : "<<destination<<endl;
		   	cout<<"Distance : "<<distance<<endl;;
		    cout<<"Fuel : "<<fuel<<endl;
		   }
		   
};
int main()
{
flight obj;
obj.FEEPINFO();
obj.SHOWINFO();
	
return 0;
}
