#include<iostream>
using namespace std;
template <class type>
type addition(type a , type b)
{
	return a + b;
}
int main()
{
int a=4,b=8,s;
float x=4.3,y=8.4,sum;
s = addition(a,b);
sum = addition(x,y);
cout<<s<<endl;
cout<<sum<<endl;
return 0;
}
