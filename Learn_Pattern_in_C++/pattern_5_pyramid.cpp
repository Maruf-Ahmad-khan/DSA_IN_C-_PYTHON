// write a program to print the pattern 
// Your patter will be : 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1
#include <iostream>
using namespace std;
int main()
{
     int n;
     cout << "Enter n : " << endl;
     cin >> n;
     cout<<"Your patter will be : "<<endl;
     for (int row = n; row >= 0; row--)
     {
          for (int col = 1; col <= row; col++)
          {
               cout << col << " ";
          }
          cout << endl;
     }
     return 0;
}