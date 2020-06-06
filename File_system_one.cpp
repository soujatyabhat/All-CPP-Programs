#include<iostream>
using namespace std;
class product{
	char name[10];
	int code;
	float cost;
	public:
	void get_data()
	{
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter code:";
		cin>>code;
		cout<<"Enter cost: ";
		cin>>cost;
	}
	void show_data()
	{
		cout<<name;
		cout.width(8);
		cout<<code;
		cout.width(8);
		cout<<cost;
	}
};
int main()
{
product obj[10];
int i,n;
cout<<"Enter number of product to show: ";
cin>>n;
for(i=0;i<n;i++)
{
 obj[i].get_data();
 cout<<endl;
}
cout<<"Name ";
cout.width(8);
cout<<"Cost ";
cout.width(8);
cout<<"Cost";
cout.width(8);
cout<<endl;
for(i=0;i<n;i++)
{
	obj[i].show_data();
	cout<<endl;
}
return 0;
}
