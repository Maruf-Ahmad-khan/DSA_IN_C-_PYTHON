// Find All Duplicates in an Array
// Given an integer array nums of length n where all the integers of nums are in the 
// range [1, n] and each integer appears once or twice, return an array of all 
// the integers that appears twice.
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
#include<bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int>& nums)
{
     vector<int> ans;
     sort(nums.begin(), nums.end());
     for(int i = 1; i < nums.size(); i ++)
     {
          if(nums[i - 1] == nums[i])
          {
               ans.push_back(nums[i]);
          }
     }
     return ans;
}
int main()
{
     vector<int> nums = {4,3,2,7,8,2,3,1};
     vector<int> ans = findDuplicates(nums);
     cout<<"The Duplicate Numbers are : "<<ans[0]<<","<<ans[1]<<endl;
     return 0;
}