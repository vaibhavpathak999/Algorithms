#include <bits/stdc++.h>
using namespace std; 
void QuickSort(int input[] , int si  , int ei)
{
    if(si>=ei)
    {
        return ;
    }
    int t = input[si];
    int count = 0 ;
    for(int i = si ; i<=ei ; i++)
    {
        if(input[i]<t)
        {
            count++;
        }
    }
   
    int temp = input[si];
    input[si] = input[si+count];
    input[si+count] = temp;
     int i = si , j = ei ;
    while(i<=j)
    {
        if(input[i]<t)
        {
            i++;
        }
        else if(input[j]>=t){
            j--;
        }
        else 
        {
            int x = input[i];
            input[i] = input[j];
            input[j] = x;
            i++;
            j--;
        }
    }
    QuickSort(input , si , si+count-1 );
    QuickSort(input ,si+count+1 , ei);
    
}
void quickSort(int input[], int size) {
 
    QuickSort(input ,0 , size-1 );
}
