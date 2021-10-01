#include<iostream>
using namespace std;

// if the inpute number is power_factorial of 2 then return 1 , else 0

bool bitManuplation(int n){
    return (n && !(n & (n-1)));
}

int main(){

    int n;
    cin>>n;

    cout<<bitManuplation(n);

    return 0;

}