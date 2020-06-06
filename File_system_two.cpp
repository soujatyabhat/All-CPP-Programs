#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float data = 34.45;
cout<<setw(10)<<data<<endl;
cout<<setw(10)<<std::right<<data<<endl;
cout<<setprecision(4)<<data<<endl;
cout<<setfill('*')<<setw(9)<<data;
return 0;
}
