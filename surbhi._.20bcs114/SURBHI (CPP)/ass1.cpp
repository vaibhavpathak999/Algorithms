#include<iostream>
#include <iomanip>
using namespace std;
class SINX
{
private:
    int x, N;

public:
    SINX(int x1, int N1)
    {
        x = x1, N = N1;
    }

    void Evaluate()
    {
        double x1, t, sum;
        x1 = x * 3.14159 / 180;
        t = x;
        sum = x;
        for (int i = 1; i <= N; i++)
        {
            t = (t * (-1) * x * x) / (2 * i * (2 * i + 1));
            sum = sum + t;
        }
        cout<<" The value of Sin("<<x<<") = "<<setprecision(4)<<sum;
    }
};
int main()
{
    int x, n;
    cout << "Enter the value of x & n\n";
    cin >> x >> n;
    SINX object(x, n);
    object.Evaluate();
    return 0;
}

 
 
