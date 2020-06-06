#include<iostream>
using namespace std;
class complex{
	float real,img;
	public:
	void get_data(float r, float i)
	{
		real = r;
		img = i;
	}
	complex operator+(complex &obj)
	{
		complex sum;
		sum.img = this->img + obj.img;
		sum.real = this->real + obj.real;
		return sum;
	}
	void disp()
	{
		cout<<"The value of real & img are : "<<img<<"+"<<real<<"i";
	}
};
int main()
{
	complex obj,obj_two,obj_three;
	obj.get_data(2.5,3.5);
	obj_two.get_data(2.5,3.5);
	obj_three = obj + obj_two;
	obj_three.disp();
return 0;
}
