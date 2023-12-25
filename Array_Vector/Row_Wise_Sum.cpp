// Write a program to print the 
// Sum of matrix row wise
#include<iostream>
using namespace std;
void Sum(int arr[3][3], int rows, int cols)
{
     int sum = 0;
     for(int i = 0; i < rows ; i ++)
     {
          for(int j = 0; j < cols; j ++)
          {
               sum = sum + arr[i][j];
          }
          cout<<sum<<" "<<endl;
     }
}
int main()
{
     int arr[3][3];
     int rows = 3;
     int cols = 3;
     // Enter input
     cout<<"Give the input : "<<endl;
     for(int i = 0 ; i < rows ; i ++)
     {
          for(int j = 0; j < cols ; j ++)
          {
               cin >> arr[i][j];
          }
     }
     // Printing matrix
     cout<<"Print the matrix row wise :"<<endl;
     for(int i = 0; i < rows ; i ++)
     {
          for(int j = 0; j < cols ; j ++)
          {
               cout<<arr[i][j]<<" "<<endl;
          }
     }
     cout<<"The sum of matrix row wise is :"<<endl;
     Sum(arr, rows, cols);
     return 0;
}