#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
	void get_data(float r,float i)
	{
		real = r;
		img = i;
	}
	friend void sum(complex obj,complex obj_two)
	{
	double r,i;
	i = obj.img + obj_two.img;
	r = obj.real + obj_two.real;
	cout<<"the result is : "<<r<<"+"<<i<<"i"<<endl;
	}
};
int main()
{
	complex obj_one,obj_two,obj_sum;
	obj_one.get_data(2,3);
	obj_two.get_data(4,9);
	sum(obj_one,obj_two);
	
return 0;
}

