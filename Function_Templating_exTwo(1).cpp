#include<iostream>
using namespace std;
template <class type>
class swp{
	public:
void sort(type ar[], int n)
{
	type temp;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp = ar[j+1];
				ar[j+1] = ar[j];
				ar[j] = temp;
			}
		}
	}
	cout<<"The sorted Array is: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<" "<<ar[i];
	}
	cout<<endl;
}
};
int main()
{
int arr[5]={15,2,45,23,3};
float brr[5]={1.4,22.4,12.44,15.3,15.54};

swp<int>obj;
swp<float>obj_two;
obj.sort(arr,5);
obj_two.sort(brr,5);
return 0;
}
