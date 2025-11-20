#include <iostream>
using namespace std ;
int main()
{
  int i , *Num , n , p ,j , Num1 , Num2;
  float *avg;
  float max2 , max1 ;

  //cout <<"type the number of students." << endl;
  cin >> n;
  Num = new int();
  avg = new float[n];
  for (i=0 ; i<n ; i++)
{
 // cout << "type in the student number.";
  cin >> Num[i];
 // cout << "average" << endl;
  cin >> avg[i];
}
Num1=Num[0];
max1=avg[0];
for(p=0 ; p<n ; p++)
{
  if(avg[p] < avg[p++])
  max1=avg[p++];
  if(Num[p] < Num[p++])
  Num1=Num[p++];
}
if(avg[1]!= max1)
{
max2=avg[1];
Num2=Num[1];
for(j=1 ; j<=n ; j++)
{
if(avg[j]<avg[j++])
max2=avg[j++];
if(Num[j]<Num[j++])
Num2=Num[j++];
}
}
cout << "Second student is " << Num2 << " and mean is " << max2;
}