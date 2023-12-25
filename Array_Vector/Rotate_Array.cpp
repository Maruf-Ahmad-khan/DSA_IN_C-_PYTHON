// Given an integer array nums,
//  rotate the array to the right by k steps,
// where k is non-negative.
// Rotate Array
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
#include <bits/stdc++.h>
using namespace std;
void RotateArray(vector<int> &nums, int k)
{
     vector<int> n(nums.size());
     for (int i = 0; i < nums.size(); i++)
     {
          n[(i + k) % nums.size()] = nums[i];
     }
     //     copy
     nums = n;
}
void print(vector<int> &nums)
{
     for (int i = 0; i < nums.size(); i++)
     {
          cout << nums[i] << " " << endl;
     }
     cout << endl;
}
int main()
{
     vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
     int k = 3;
     cout << "The numbers after rotation is :" << endl;
     RotateArray(nums, k);
     print(nums);
     return 0;
}