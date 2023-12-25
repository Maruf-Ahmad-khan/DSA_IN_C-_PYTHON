// Peak Element
// Input: nums = [1,2,3,1]
// Output: 2
#include <bits/stdc++.h>
using namespace std;
int PeakElement(vector<int> &nums)
{
     int left = 0;
     int right = nums.size() - 1;
     int mid = left + (right - left) / 2;
     while (left < right)
     {
          if (nums[mid] < nums[mid + 1])
          {
               left = mid + 1;
          }
          else
          {
               right = mid;
          }
          mid = left + (right - left) / 2;
     }
     return left;
}
int main()
{
     vector<int> nums = {1, 2, 3, 1};
     int res = PeakElement(nums);
     cout << "peak element is :" << res << endl;
     return 0;
}