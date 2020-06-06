#include<iostream>
using namespace std;
class family{
	public:
		void display()
		{
			cout<<"I am family"<<endl;
		}
};
class dad:public virtual family{
	public:
		void prt()
		{
			cout<<"I am dad of the Rick"<<endl;
		}
};
 class mom:public virtual family{
	public:
		void show()
		{
			cout<<"I am mom of the Rick"<<endl;
		}
};
class me:public dad, public mom{
	public:
		void put()
		{
			cout<<"I am rick";
		}
};
int main()
{
	me obj;
	obj.display();
	obj.prt();
	obj.show();
	obj.put();
return 0;
}

