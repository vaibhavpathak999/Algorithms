#include<iostream>
using namespace std;

void subarray(int *arr, int n){
    for(int i=0; i< (1<<n); i++){
        for(int j=0; j<n; j++){
            if( i & (1<<j)){     // i and 1<<j ka get bit wala operation kra rhe
                cout<<arr[j]<<" ";   // binary formate me apne aap chalta jayega
            }
        }
        cout<<endl;
    }
}

int main(){

    int n=4;
    int arr[n]= {1,2,3,4};

    subarray(arr,n);

    return 0;

}