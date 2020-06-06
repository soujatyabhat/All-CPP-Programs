#include<iostream>
#include<math.h>
using namespace std;
class pow{
	int n,m;
	friend int power(int,int);
};
 int power(int m,int n)
{
	int power=m,i;
	for(i=1;i<n;i++)
	{
		power = power * m;
	}
	return power;
}
int main()
{
	int n,m,result;
	cout<<"Enter a number: ";
	cin>>m;
	cout<<"Enter power value :";
	cin>>n;
	result = power(m,n);
	cout<<"The result is : "<<result;
}
