#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{
   char r='r' , R='R' , g='g' , G='G' , b='b' , B='B' , p;
   cout << "Type the first letter of the color you want.";
   cin >> p;
   if (p==r || p==R)
  cout <<"You're thinking about Red!";
   else if (p==g || p==G)
   cout <<"You're thinking about Green!";
   else if (p==b || p==B)
   cout <<"You're thinking about Blue!";
   else
   cout << "I'm not sure what color you're thinking about!";
 
}
