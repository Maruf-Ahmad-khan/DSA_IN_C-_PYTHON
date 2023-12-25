// write a program to move all negative number to left side
#include <bits/stdc++.h>
using namespace std;
void Movenegative(int arr[], int n)
{
     int low = 0;
     int high = n - 1;
     while (low < high)
     {
          if (arr[low] < 0)
          {
               low++;
          }
          else if (arr[high] > 0)
          {
               high--;
          }
          else
          {
               swap(arr[low], arr[high]);
          }
     }
}
void Print(int arr[], int n)
{
     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << endl;
     }
     cout << endl;
}
int main()
{
     int arr[] = {-1, -2, 3, 4, 5, 6, -7, -8};
     int n = sizeof(arr) / sizeof(int);
     cout << "Original array :" << endl;
     Print(arr, n);
     cout << "New array :" << endl;
     Movenegative(arr, n);
     Print(arr, n);
     return 0;
}
