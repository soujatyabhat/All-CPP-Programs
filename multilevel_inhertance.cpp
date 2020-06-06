#include<iostream>
using namespace std;
class grand_parent{
	public:
		void display()
		{
			cout<<"I am grand parent"<<endl;
		}
};
class parent:public grand_parent{
	public:
		void display()
		{
			cout<<"i am parent class"<<endl;
		}
};
class child:public parent{
	public:
		void display()
		{
			cout<<"I am Child class"<<endl;
		}
};
int main()
{
	child obj;
	obj.display();
	obj.parent::display();
	obj.grand_parent::display();
return 0;
}
