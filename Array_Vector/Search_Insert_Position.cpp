// Search Insert Position
// Input: nums = [1,3,5,6], target = 5
// Output: 2
//it's solution on leet code and conding niza's will be same
#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target)
{
   int left = 0;
   int right = nums.size() - 1;
   while(left <= right)
   {
     int mid = left + (right - left) / 2;
     if(nums[mid] == target)
     {
          return mid;
     }
     else if(nums[mid] > target)
     {
          right = mid - 1;
     }
     else
     {
          left = mid + 1;
     }
   }
   return left;
}
int main()
{
     vector<int> nums = {1,3,5,6};
     int target = 5;
     int ans = searchInsert(nums, target);
     cout<<"The output will be : "<<ans <<endl;
     return 0;
}