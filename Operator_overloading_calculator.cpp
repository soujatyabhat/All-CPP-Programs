#include<iostream>
using namespace std;
class complex{
	float value;
	public:
	complex(float data)
	{
		value = data;
	}
	complex operator+(complex obj)
	{
		complex obj_sum(0);
		obj_sum.value = value + obj.value;
		return obj_sum;
	}
	complex operator-(complex obj)
	{
		complex obj_sub(0);
		obj_sub.value = value -  obj.value;
		return obj_sub;
	}
	void disply()
	{
		cout<<"The Value is: "<<value;
	}
};
int main()
{
	complex value_one(123.4);
	complex value_two(4.5);
	complex value_three(0);
	complex value_four(0);
	value_three = value_one + value_two;
	value_four = value_one - value_two;
	value_three.disply();
	value_four.disply();
return 0;
}
