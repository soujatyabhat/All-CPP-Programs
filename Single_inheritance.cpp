#include<iostream>
using namespace std;
class parent{
	public:
	void display()
	{
		cout<<"I am Parent in child";
	}
};
class child:public parent{
	public:
	void display()
	{
		cout<<"I am child class"<<endl;
	}
};
int main()
{
child obj;
obj.display();
obj.parent::display();
return 0;
}
