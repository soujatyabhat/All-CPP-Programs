#include<iostream>
using namespace std;
class area{
	double ar;
	public:
	area(int l, int w)
	{
		cout<<"Area of rectangle is : "<<(l*w)<<endl;
	}
	area(int r, float PI = 3.14)
	{
		cout<<"Area of circle is : "<<(PI * r * r)<<endl;
	}
};
int main()
{
area obj(2,3);
area obj_two(3);
return 0;
}
