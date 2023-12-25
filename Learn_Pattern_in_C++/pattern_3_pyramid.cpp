// write a program to print pattern
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1
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
          for (int col = row; col >= 1; col--)
          {
               cout << col << " ";
          }
          cout << endl;
     }
     return 0;
}