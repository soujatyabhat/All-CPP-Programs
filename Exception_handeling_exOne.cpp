#include<iostream>
using namespace std;
int main()
{
int n,m;
try{
	cout<<"Enter a divisor: ";
	cin>>n;
	cout<<"Enter devicer: ";
	cin>>m;
	if(m == 0)
		 throw(m);
	else
		cout<<"The value is : "<<n/m;
}
catch(int m)
{
	cout<<"The given deviser "<<m<<" is not applicable for calculation";
}
return 0;
}
