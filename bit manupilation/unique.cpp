#include<iostream>
using namespace std;

void unique( int arr[], int n){
    int p=0;
    for(int i=0; i<n; i++){
        p= p^ arr[i]
    }
}

int main(){

    int n=11;
    int arr[n]= {2,3,4,5,6,5,3,4,2,7,6};

    unique( arr, n);


    return 0;

}