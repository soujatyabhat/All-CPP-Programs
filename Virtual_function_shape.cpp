#include<iostream>
using namespace std;
class shape{
	public:
	double value_one , value_two;
	void get_data()
	{
		 cout<<"Enter first value:";
		 cin>>value_one;
		 cout<"Enter second value :";
		 cin>>value_two;
	}
	virtual void display() = 0;
};
class rectangle:public shape{
	public:
	void display()
	{
        double area;
		area =  value_one * value_two;
		cout<<"the area of rectangle : "<<area;
	}
};
class triangle:public shape{
	public:
	void display()
	{
	 	 double area;
		area =  (value_one * value_two) * 0.5;
		cout<<"the area of rectangle : "<<area;
	}
};
int main()
{
	triangle obj;
	rectangle obj_two;
	obj_two.value_two;
	obj.get_data();
	obj_two.get_data();
	obj.display();
	obj_two.display();
return 0;
}
