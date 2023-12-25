// write a program in c++ to print
// 1
// 12
// 123
// 1234
// 12345
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
          for (int col = 1; col <= row; col++)
          {
               cout << col << " ";
          }
          cout << endl;
     }
     return 0;
}