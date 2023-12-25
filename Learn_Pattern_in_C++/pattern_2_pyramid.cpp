// write a program to print the pattern 
//1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
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
               cout << row << " ";
          }
          cout << endl;
     }
     return 0;
}