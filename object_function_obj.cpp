#include<iostream>
using namespace std;
class book{
	int book_number,n;
	char book_title[10];
	float price;
	public:
	void input()
	{
		cout<<"Enter title:";
		cin>>book_title;
		cout<<"Enter number: ";
		cin>>book_number;
		cout<<"Enter Price: ";
		cin>>price;
	}
	void Purchase()
	{
		 cout<<"Enter a number of copies :";
		 cin>>n;
		 float i  = total_cost(n);
		 cout<<"The total is : "<<i;
	}
	float total_cost(int n)
	{
		return (n*price);
	}
};
int main()
{
book obj;
obj.input();
obj.Purchase();
return 0;
}
