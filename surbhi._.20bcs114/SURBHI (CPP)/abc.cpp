#include<iostream>
using namespace std;
//int main()
//{
//	int a,b,c;
//	cout<<"Enter the value of a"<<endl;
//	cin>> a;
//	cout<<"Enter the value of b"<<endl;
//	cin>> b;
//	c=a+b;
//	cout << "the sum is c"<<a+b;
    int c=45;
	int main()
    {
		int a,b,c;
		float d=34.4;
		
		long double e= 34.4L;
		cout<<"enter the value of a:"<<endl;
		cin>>a;
		cout<<"enter the value of b:"<<endl;
		cin>>b;
		c=a+b;
		cout<<"the sum is c:"<<c<<endl;
		cout<<"the global is c:"<<::c<<endl;
		cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;
		
		return 0;
	}	
		

