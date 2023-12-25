// Find the Duplicate Number
// Given an array of integers nums containing n + 1
// integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// Input: nums = [1,3,4,2,2]
// Output: 2
#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &nums)
{
     sort(nums.begin(), nums.end());
     for (int i = 0; i < nums.size(); i++)
     {
          if (nums[i] == nums[i + 1])
          {
               return nums[i];
          }
     }
     return -1;
}
int main()
{
     int n;
     cout << "Enter the size of the array :" << endl;
     cin >> n;
     vector<int> nums(n);
     cout << "Elements are :" << endl;
     for (int i = 0; i < nums.size(); i++)
     {
          cin >> nums[i];
     }
     int res = findDuplicate(nums);
     cout << "Duplicate number :" << res << endl;
     return 0;
}