#include<iostream>
using namespace std;

void selectionSort(int arr[],int len);
void display(int arr[],int len,int passNo);

int main(){
    int len;
    //enter size of array
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    selectionSort(arr,len);
    
    //display sorted array
    return 0;
}

void selectionSort(int arr[],int len){
    
    for(int i=0;i<len-1;i++){
        int minEle=i;
        int j;
        for(j=i+1;j<len;j++){
            if(arr[j]<arr[minEle]){
                minEle=j;
            }
        }

        //swap elements
        int temp=arr[i];
        arr[i]=arr[minEle];
        arr[minEle]=temp;

        //display intermediate state of array
        display(arr,len,i+1);
        
    }
}

void display(int arr[],int len,int passNo){
    cout<<"Array after "<< passNo <<"pass: ";
    for(int j=0;j<len;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
