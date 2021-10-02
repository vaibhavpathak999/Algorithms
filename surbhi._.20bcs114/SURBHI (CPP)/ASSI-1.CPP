#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace  std;

class sinx {
   int x;
  int N;

public :
  

 void get(void)
 {
  cin>>x;
    cin>>N;
 }

 void Evaluate(int x, int N){
  // Yeh Sinx function ka code nhi aata bss
//..... Code here
  
    int t,i;
    int sum;
    
    x=x*3.14159/180;
    t=x;
    sum=x;
    
    /* Loop to calculate the value of Sine */
    for(i=1;i<=N;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
    
    cout<<" The value of Sin("<<x<<") = "<<setprecision(4)<<sum;
 }
};
int  main()
{
    
    sinx sin1;
    sin1.get();
    sin1.Evaluate(3,5);
    
    
    return 0;
}
