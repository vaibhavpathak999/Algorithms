#include<iostream>
using namespace std;
int main()
{
	int a= 4,b= 5;
	cout <<"operator in c++:"<<endl;
	cout <<"following are the types"<<endl;
	//ARITHMETIC OPERATORS
	cout<<"the value of a+b "<<a+b<<endl;
	cout<<"the value of a-b "<<a-b<<endl;
	cout<<"the value of a*b "<<a*b<<endl;
	cout<<"the value of a/b "<<a/b<<endl;
	cout<<"the value of a%b "<<a%b<<endl;
	cout<<"the value of a++ "<<a++<<endl;
	cout<<"the value of a-- "<<a--<<endl;
	cout<<"the value of --a "<<--a<<endl;
	//comparison operators
	cout<<"The value of a==b is "<<(a==b)<<endl;
	cout<<"The value of a!=b is "<<(a!=b)<<endl;
	cout<<"The value of a>=b is "<<(a>=b)<<endl;
	cout<<"The value of a<=b is "<<(a<=b)<<endl;
	cout<<"The value of a>b is "<<(a>b)<<endl;
	cout<<"The value of a<b is "<<(a<b)<<endl;
	//logical operator
	cout<<"the value of this logic & operator((a==b)&&(a<b)) is:"<<((a==b) &&(a<b))<<endl;
	cout<<"the value of this logic or operator((a==b)&&(a<b)) is:"<<((a==b) ||(a<b))<<endl;
	cout<<"the value of this logic not operator((!a==b)) is:"<<(!(a==b))<<endl;
	
	
	
	return 0;
}
