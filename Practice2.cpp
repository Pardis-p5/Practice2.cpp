#include <iostream>
using namespace std ;
int main()
{
   int p , i , sum ;
   cout << "type a number." ;
   cin >> p;
   sum = 0;
   for (i=1 ; i<p ; i++ )
   {
    sum = p%i==0 ? sum+=i : sum; 
   }
   if (sum==p)
   cout << "Your number is KAMEL";
   else
   cout << "Your number is NOT KAMEL";
}
