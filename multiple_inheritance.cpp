#include<iostream>
using namespace std;
class one{
	public:
		int a,b;
		void get_data(int i, int j)
		{
			a = i;
			b = j;
		}
};
class two{
	
	public:
		int x,y;
		void get_values(int x , int y)
		{
			this->x = x;
			this->y = y;
		}
};
class calculate:public one , public two{
	public:
		void get_calculate()
		{
			a = a + x;
			b = b + y;
			cout<<"The sum of a & b are : "<<a<<b;
		}
};
int main()
{
calculate obj;
obj.get_values(2,3);
obj.get_data(4,5);
obj.get_calculate();
return 0;
}
