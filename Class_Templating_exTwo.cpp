#include<iostream>
using namespace std;
template <class type>
class calculator{
	public:
	type x,y;
	calculator(type a, type b)
	{
    	x = a;
		y = b;
//	 cout<<"The sum is: "<<a+b<<endl;
	}
	void display()
	{
		cout<<"The sum is: "<<x+y<<endl;
	}
};
int main()
{
calculator<int>obj(1,2);
obj.display();
calculator<float> obj_two(1.4,2.4);
obj_two.display();
return 0;
}
