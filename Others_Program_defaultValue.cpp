#include<iostream>
#include<math.h>
using namespace std;
int power(int m,int n = 2)
{
	return pow(m,n);
}
int main()
{
	int n=4,m=5;
	int pwr;
	pwr=power(n,m);//call as normal method//
	cout<<"The result is: "<<pwr<<endl;
	
	pwr=power(n); //Utilizing the facility of default argument//
	
	cout<<"The result is: "<<pwr;
return 0;
}
