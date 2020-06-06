#include<iostream>
using namespace std;
class rectangle{
	double length,width;
	double ar,per;
	public:
	void setlength(float l)
	{
		length = l;
	}
	void setwidth(float w)
	{
		width = w;
	}
	float area()
	{
	  ar = (length * width);
	  return ar;
	}
	float permiter()
	{
	 per = 2 * (length + width);
	 return per ;
	}
	int sameArea(rectangle &obj,rectangle &obj_two)
	{
		if(obj.ar == obj_two.ar)
		   return 1;
		else
		   return 0;
	}
	void display()
	{
		cout<<"Area : "<<ar<<endl;
		cout<<"Perimeter: "<<per<<endl<<endl;
	}
};
int main()
{
rectangle obj,obj_two;
rectangle obj_three,obj_four;
/*For first Object*/
int con;

obj.setlength(5);
obj.setwidth(2.5);

obj.area();
obj.permiter();
obj.display();

/*For Second Object*/
obj_two.setlength(5);
obj_two.setwidth(18.9);

obj_two.area();
obj_two.permiter();
obj_two.display();
con = obj_three.sameArea(obj,obj_two);


if(con == 1)
	   cout<<"Equal"<<endl<<endl;
else
	   cout<<"Not Equal"<<endl<<endl;

//Declear object one again//
obj.setlength(15);
obj.setwidth(6.3);

obj.area();
obj.permiter();
obj.display();
con = obj_four.sameArea(obj,obj_two);
if(con == 1)
	   cout<<"Equal"<<endl;
else
	   cout<<"Not Equal"<<endl;
return 0;
}
