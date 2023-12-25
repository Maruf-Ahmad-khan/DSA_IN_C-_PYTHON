// write a program to find the maximum number in a matrix
#include <bits/stdc++.h>
using namespace std;
int Maximum(int arr[4][4], int rows, int cols)
{
     int maxi = INT_MIN;
     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               if (arr[i][j] > maxi)
                    maxi = arr[i][j];
          }
     }
     return maxi;
}
int main()
{
     int arr[4][4];
     int rows = 4;
     int cols = 4;
     // Enter the input
     cout << "Enter the matrix :" << endl;
     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               cin >> arr[i][j];
          }
     }
     cout << "Print the matrix :" << endl;
     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               cout << arr[i][j] << " " << endl;
          }
     }
     cout << "The maximum number is :" << Maximum(arr, rows, cols) << endl;
     return 0;
}