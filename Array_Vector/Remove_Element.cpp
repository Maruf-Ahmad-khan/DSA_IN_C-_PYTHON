// Given an integer array nums and an integer val,
//  remove all occurrences of val in nums in-place.
//  The order of the elements may be changed. 
// Then return the number of elements in nums which are not equal to val.
// Input: nums = [3,2,2,3], val = 3
// Output: 2, nums = [2,2,_,_]
#include<bits/stdc++.h>
using namespace std;
 int removeElement(vector<int>& nums, int val)
 {
     int count = 0;
     for(int i = 0; i < nums.size(); i++)
     {
          if(nums[i] != val)
          {
               nums[count] = nums[i];
               count ++;
          }
     }
     return count;
 }
 int main()
 {
     vector<int> nums = {3,2,2,3};
     int val = 3;
     int ans = removeElement(nums, val);
     cout<<"The removed Element is : "<<ans<<endl;
     return 0;
 }