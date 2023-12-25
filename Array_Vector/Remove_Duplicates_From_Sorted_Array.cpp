// Given an integer array nums sorted in non-decreasing order,
//  remove the duplicates in-place such that each unique element appears only once.
//  The relative order of the elements should be kept the same. 
// Then return the number of unique elements in nums.
// Input: nums = [1,1,2]
// Output: 2
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums)
{
     int insert_index = 1;
     for(int i = 1; i < nums.size(); i ++)
     {
          if(nums[i - 1] != nums[i])
          {
               nums[insert_index] = nums[i];
               insert_index ++;
          }
     }
     return insert_index;
}
int main()
{
     vector<int> nums = {1,1,2};
     int insert_index = removeDuplicates(nums);
     cout<<"The element is :"<<insert_index<<endl;
     return 0;
}