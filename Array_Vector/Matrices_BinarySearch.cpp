#include <iostream>
// Binary search in matrix
using namespace std;
bool BinarySearch(int arr[][3], int rows, int cols, int key)
{
     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               if (arr[i][j] == key)
                    return true;
          }
     }
     return false;
}
int main()
{
     int arr[4][3];
     int rows = 4;
     int cols = 3;
     int key = 15;
     // Enter input
     cout << "Enter the input of matrices: " << endl;
     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               cin >> arr[i][j];
          }
     }
     cout << "Printing matrix row wise: " << endl;
     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               cout << arr[i][j] << " "<<endl;;
          }
     }
     cout << "The key is : " << BinarySearch(arr, rows, cols, key) << endl;
     return 0;
}