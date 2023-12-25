// Input: nums = [1,1,1,2,2,3]
// Output: 5, nums = [1,1,2,2,3,_]
// Remove Duplicates from Sorted Array II
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) 
{
     int n = nums.size() - 1;
     if(n < 3)
     return n;
     int res = 2;
     for(int i = 2; i < n; i ++)
     {
          if(nums[i] != nums[res - 2])
          nums[res] = nums[i];
          res ++;
     }
}
int main()
{
     vector<int> nums = {1,1,1,2,2,3};
     int res = removeDuplicates(nums);
     cout<<"The Duplicates are :"<<res<<endl;
     return 0;
}