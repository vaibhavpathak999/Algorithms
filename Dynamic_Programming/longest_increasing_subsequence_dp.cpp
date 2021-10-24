/* Dynamic Programming C++ implementation of LIS problem */
#include <bits/stdc++.h>
using namespace std;

int lis(int arr[], int n)
{
	int lis[n+1];
	for(int i=0;i<=n;i++)
		lis[i]=1e9;//INF
	lis[0]=-1e9;//-INF
	for(int i=0;i<n;i++)
	{
		int j=upper_bound(lis,lis+n+1,ar[i])-lis;
		if( ar[i]>lis[j-1] && ar[i]<lis[j] ) 
			lis[j]=ar[i];
	}
	
	int ans=0;
	for(int i=0;i<=n;i++)
	{
		if(lis[i]!=1e9)
			ans=i;
	}
	
	return ans;
	
}

/* Driver program to test above function */
int main()
{
	int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Length of lis is %d\n", lis(arr, n));

	return 0;
}

