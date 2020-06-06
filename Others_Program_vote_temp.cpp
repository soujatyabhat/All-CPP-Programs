#include<iostream>
#include<stdlib.h>
using namespace std;
int ar[10];
int top=-1;
void push(int n)
{
++top;
 ar[top]=n;
}
void display()
{
	int i,j;
	int count=0,count_spoil=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=top;j++)
		{
			if(i == ar[j])
			  	++count;
			else 
				++count_spoil;
		}
     cout<<i<<" : "<<count<<endl;
}
	 cout<<"Spoil Votes: "<<count_spoil<<endl;
}
int main()
{
	int n,con;
	while(1)
	{
	cout<<"Enter your choose: ";
	cin>>n;
	switch(n)
	{
		case 1:
				push(1);
				break;
		case 2:
				push(2);
				break;
		case 3:
				push(3);
				break;
		case 4:
				push(4);
				break;
		case 5:
			   push(5);
			   break;
		case 6:
			   display();
			   break;
		default:
				push(0);
				break;
    }
}
return 0;
}
