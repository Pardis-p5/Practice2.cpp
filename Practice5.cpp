#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int number;
    int n , i , k , p , j , m  , l , b;
    cout <<"type a number.";
    cin >> number;
    cout <<"type one of the bases 2 , 8 , 16 ";
    cin >> k;
    cout << "The converted number is: ";
    if (k==2)
    {
        for( i=0 ; number != 0 ; i++)
        { p = number%2;
          cout << p;
          number=number/2;
        }

    }
     else if (k==8)
    {
      for (j=0 ; number != 0 ; i++)
      {
        m = number%8;
        cout << m;
        number=number/8;
      }
    }
    else if (k==16)
    {
      for (b=0 ; number != 0 ; b++)
      {
         l=number%16;
         if(l==10)
         cout << 'A';
         else if (l==11)
         cout <<'B';
         else if (l==12)
         cout <<'C';
         else if (l==13)
         cout << 'D';
         else if (l==14)
         cout <<'E';
         else if(l==15)
         cout << 'F';
         else
         cout <<l;
         number=number/16;
      }
    }
}
