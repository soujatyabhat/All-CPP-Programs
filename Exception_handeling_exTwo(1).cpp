#include<iostream>
using namespace std;
class array{
	int n,i;
	int arr[5];
	public:
	void get_data_manage()
	{
	try{
		cout<<"Enter Range: ";
		cin>>n;
		if(n > 5)
		{
			 throw(n);
	    }
		else
		{
		for(i=0;i<n;i++)
		{
			cout<<"Enter "<<i<<" value: ";
			cin>>arr[i];
		}
		cout<<"The result is: ";
		for(i=0;i<n;i++)
			cout<<arr[i]<<" ";
		}
	}
catch(int n)
{
	cout<<"The value which is upper than upper bound of the array";
}
}
};
int main()
{
array obj;
obj.get_data_manage();
return 0;
}
