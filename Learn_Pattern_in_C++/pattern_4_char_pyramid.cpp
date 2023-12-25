// write a program to print the pattern
// Your patter will be : 
// a 
// b b 
// c c c 
// d d d d 
// e e e e e
#include <iostream>
using namespace std;
int main()
{
     int n;
     cout << "Enter n : " << endl;
     cin >> n;
     cout<<"Your patter will be : "<<endl;
     for (int row = 1; row <= n; row++)
     {
          char ans = 'a' + row - 1;
          for (int col = 1; col <= row; col ++)
          {
               cout << ans << " ";
          }
          cout << endl;
     }
     return 0;
}