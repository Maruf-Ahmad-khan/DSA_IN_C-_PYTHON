// Enter n : 
// 5
// Your patter will be : 
// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1 
#include <iostream>
using namespace std;
int main()
{
     int n;
     cout << "Enter n : " << endl;
     cin >> n;
     cout<<"Your patter will be : "<<endl;
     for (int row = n; row >= 1; row--)
     {
          for (int col = n; col >= row; col--)
          {
               cout << col << " ";
          }
          cout << endl;
     }
     return 0;
}