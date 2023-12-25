#include<bits/stdc++.h>
using namespace std;
int upperBound(vector<int> &arr, int x, int n)
{
     int low = 0;
     int end = n - 1;
     int ans = x;
     while(low <= end)
     {
          int mid = low + (end - low) / 2;
          if(arr[mid] > x)
          {
               ans = mid;
               end = mid - 1;
          }
          else
          {
               low = mid + 1;
          }
     }
     return low;
}
int main()
{
     vector<int> arr = {2,4,6,7};
     int n = 4;
     int x = 5;
     int ans = upperBound(arr, n, x);
     cout<<"The upper bound is : "<<ans<<endl;
     return 0;
}