#include<iostream>
using namespace std;

// number of ones in binary form of n

int count(int n){
    int sum=0;
    while(n!=0){
        sum++;
        n= n & (n & (n-1));
    }
    return sum;
}

int main(){

    int n;
    cin>>n;

    if(n==0) cout<<n;
    else{
    cout<<count(n);
    }
    return 0;

}