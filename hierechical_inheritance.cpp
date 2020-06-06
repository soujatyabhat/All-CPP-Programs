#include<iostream>
using namespace std;
class value{
	public:
		int a,b;
		void get_data(int a, int b)
		{
			this->a = a;
			this->b = b;
		}
};
class sum:public value{
	public:
		int sum;
		 void display()
		{
			sum = a + b;
			cout<<"The sum is : "<<sum<<endl;
		}
};
class sub:public value{
	public:
		int minus;
		void show()
		{
	        minus = a * b;
			cout<<"The sub is : "<<minus<<endl;
		}
};
int main()
{
	sum obj;
	sub obj_two;
	obj.get_data(13,2);
	obj.display();
	obj_two.show();
return 0;
}
