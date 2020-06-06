#include<iostream>
using namespace std;
class time
{
	int hh,mm;
	public:
	void settime(int h , int m)
	{
		hh = h;
		mm = m;
	}
	void operator+(time &obj)
	{
		time sum;
		int min;
		min = this->mm + obj.mm;
		if(min > 60)
			   {
			   sum.hh = (this->hh + obj.hh) + 1;
			   sum.mm = min- 60;
			   }
		else
			   {
			   sum.hh = this->hh+ obj.hh;
			   sum.mm = min;
			   }
			   cout<<"The sum is : "<<sum.hh<<"hours"<<sum.mm<<"min";
    }
};
int main()
{
time obj,obj_two,obj_three;
obj.settime(2,45);
obj_two.settime(1,20);
obj + obj_two;
return 0;
}

