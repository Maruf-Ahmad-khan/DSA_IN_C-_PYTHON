// Given an array nums containing n distinct
//  numbers in the range [0, n], return
// the only number in the range that is missing from the array.
// Missing Numbers
// Input: nums = [3,0,1]
// Output: 2
#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
     int ans = nums.size() * (nums.size() + 1) / 2;
     int sum = 0;
     for (int i = 0; i < nums.size(); i++)
     {
          sum = sum + nums[i];
     }
     int res = ans - sum;
     return res;
}
int main()
{
     vector<int> nums = {3, 0, 1};
     int res = missingNumber(nums);
     cout << "The missing number :" << res << endl;
     return 0;
}