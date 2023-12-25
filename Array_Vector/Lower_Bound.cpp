#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int n, int x)
{
     int low = 0;
     int end = n - 1;
     int ans = x;
     while(low <= end)
     {
          int mid = low + (end - low) / 2;
          if(arr[mid] >= x)
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
     vector<int> arr = {3, 5, 8, 15, 19};
     int n = 5;
     int x = 20;
     int ans = lowerBound(arr, n, x);
     cout<<"The lower Bound is the index : "<<ans<<endl;
     return 0;
}