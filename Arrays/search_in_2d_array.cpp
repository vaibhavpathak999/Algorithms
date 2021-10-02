#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n; i++){
        for(int j= 0 ; j<m; j++){
            cin>>arr[i][j];

        }
    }
    cout<<"element need to be accessed";
    int key;
    cin>>key;

    for(int i=0;i<n; i++){
        for(int j=0; j<m;j++){
            if(key==arr[i][j]){
                    cout<<i<<" "<<j;
            }
        }
    }

    return 0;

}
