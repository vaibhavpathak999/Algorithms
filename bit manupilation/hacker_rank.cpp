#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n=3;
  int a[3];
  int b[3];
  int alicescore =0 , bobscore =0;
    for(int i=0;i<n;i++){
            cin>>a[i];
    }
    for(int i=0;i<n;i++){
            cin>>b[i];
    }
    for(int i=0;i<n;i++){

        if(a[i]>b[i]){
            alicescore++;
        }
        else if (b[i]>a[i]){
            bobscore++;
        }
    }
    cout<<alicescore<<" "<<bobscore;
    return 0;
    }