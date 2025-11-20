#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n , i;
    double p=1.00 , s=1.00 ,sum=1.00 ;
    cout << "type a number.";
    cin >> n;
    if(n<10)
{
    if (n != 1)
    {
        for(i=2; i<=n ; i++)
        {
            s=s*i;
            p=1/s;
            sum+=p;
        }
    }
    else
     {
        sum=1;
     }
    cout << "The sum of the series is: " << fixed << setprecision(2) << sum;
}
else
cout << "n must be less than 10";
}
