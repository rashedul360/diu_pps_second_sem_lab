#include <iostream>
using namespace std;
int main()
{
     int a, b, c, d, e;

     cin >> a >> b >> c >> d >> e;
     if (a < b && b < c && c < d && d < e)
     {
          cout << "C\n";
     }
     else if (a > b && b > c && c > d && d > e)
     {
          cout << "D\n";
     }
     else
     {
          cout << "N\n";
     }
     return 0;
}