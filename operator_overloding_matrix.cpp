#include<iostream>
using namespace std;
class matrix{
	int array[10][10];
	int sum[10][10],sub[10][10],mul[10][10];
	int temp,i,j,k;
	public:
	void get_data(int swap[10][10],int n)
	{
		temp = n;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				array[i][j]=swap[i][j];
			}
		}
	}
	void operator +(matrix obj)
	{
		for(i=0;i<temp;i++)
		{
			for(j=0;j<temp;j++)
			{
				sum[i][j] = array[i][j] + obj.array[i][j];
				cout<<sum[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	void operator -(matrix obj)
	{
		for(i=0;i<temp;i++)
		{
			for(j=0;j<temp;j++)
			{
				sub[i][j] = array[i][j] - obj.array[i][j];
				cout<<sub[i][j]<<" ";
			}
			cout<<endl<<endl;
		}
	}
	void operator *(matrix obj)
	{
		int sum = 0;
		for(i=0;i<temp;i++)
		{
			for(j=0;j<temp;j++)
			{
				for(k=0;k<temp;k++)
				{
					 sum = sum + (array[i][k]*obj.array[k][j]);
				}
				mul[i][j] = sum;
				sum=0;
				cout<<mul[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
};
int main()
{
matrix obj,obj_two;
int a[10][10],b[10][10];
int i,j,n,con;
cout<<"Enter order : ";
cin>>n;
cout<<"First Array : "<<endl;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	cout<<"Enter "<<i<<j<<" Value : ";
	cin>>a[i][j];
	}
}
cout<<"Second  Array : "<<endl;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	cout<<"Enter "<<i<<j<<" Value : ";
	cin>>b[i][j];
	}
}
obj.get_data(a,n);
obj_two.get_data(b,n);
system("cls");
while(1)
{

 cout<<"1. Addition "<<endl<<"2. Substarction "<<endl<<"3. Multiplication "<<endl;
 cout<<"Enter your choose :";
 cin>>con;
 switch(con){
 case 1:
		obj + obj_two;
		break;
 case 2:
		obj - obj_two;
		break;
 case 3 :
		obj * obj_two;
		break;
 case 4:
		exit(0);
}
}


return 0;
}
