# include <iostream>
using namespace std;
int main()
{
int i , Num , n , Num1 , Num2;
float avg;
float max2 , max1 ;
max1=0.00;
max2=0.00;
Num1=0;
Num2=0;
//cout << "type the number of student." << endl;
cin >> n;
for(i=1 ; i<=n ; i++)
{
//cout << " type in the student number.";
cin >> Num;
//cout << " average" << endl;
cin >> avg;
if (avg > max1)
{
    max2=max1;
    Num2=Num1;
    max1=avg;
    Num1=Num;
}
else if (avg > max2 && avg != max1)
{
     max2=avg;
     Num2=Num;

}
}
cout << "Second student is " << Num2 << " and mean is " << max2;
}