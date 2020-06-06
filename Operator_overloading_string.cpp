#include<iostream>
#include<string.h>
using namespace std;
class merge{
	char str[10];
	public:
	void add(char string[])
		{
			strcpy(str,string);
		}
	void operator+(merge &obj)
 		 {
		 	strcat(str,obj.str);
		 	cout<<"The concated string is : "<<str;
	     }
};
int main()
{
char string_one[10]="deep";
char string_two[10]="rick";
merge obj,obj_two;
obj.add(string_one);
obj_two.add(string_two);
obj+obj_two;
return 0;
}
