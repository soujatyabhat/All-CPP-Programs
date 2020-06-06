#include<iostream>
using namespace std;
template <class type>
class data{
	public:
	void put_data(type a)
	{
		cout<<"The value is: "<<a<<endl;
	}
};
int main()
{
//	char data[2] ="So";
	data <int> obj;
	obj.put_data(2);
	data <float> obj_two;
	obj_two.put_data(2.5);
//	data <char> *obj_three;
//	obj_three->put_data("Hello");
return 0;
}
