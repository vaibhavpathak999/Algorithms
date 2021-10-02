#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a=3,b=78,c=1233;
	cout<<"the value of a without setw:"<<a<<endl;
	cout<<"the value of b without setw:"<<b<<endl;
	cout<<"the value of c without setw:"<<c<<endl;
	cout<<"the value of a is:"<<setw(4)<<a<<endl;
	cout<<"the value of b is:"<<setw(4)<<b<<endl;
	cout<<"the value of c is:"<<setw(4)<<c<<endl;
	return 0;
}
