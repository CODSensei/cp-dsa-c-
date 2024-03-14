#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int n;
   cin >> n;
   if (n%4==0){
    if (n%400==0)
    cout << "Leap Year";
    else if (n%100==0)
    cout << "Not Leap Year";
    
   }
   else 
   cout << "Not Leap Year";
}