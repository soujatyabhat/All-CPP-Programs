#include<iostream>
using namespace std;
class shape
{
	public:
	double PI,area;
	shape()
	{
	 PI=3.14;
	}
};
class circle:public shape
{
	public:
	circle(int r)
	{
	area  = PI * (r*r);
	cout<<"Area of circle is :"<<area<<endl;
	}

};
class rectangle:public shape
{
	public:
	rectangle(int l,int b){
	area = l*b;
	cout<<"Area of rectangle is:"<<area<<endl;
}
};
int main()
{
	shape obj;
	circle obj_two(3);
	rectangle obj_three(2,3);
return 0;
}
