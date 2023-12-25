// Given an integer array nums, find a 
// subarray
// that has the largest product, and return the product.
// The test cases are generated so that the answer will fit in a 32-bit integer.
// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.
#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>&nums)
{
     int maxi = INT_MIN;
     int prod = 1;
     for(int i = 0; i < nums.size(); i ++)
     {
          prod = prod * nums[i];
          maxi = max(maxi, prod);
          if(prod == 0)
          prod = 1;
     }
     prod = 1;
     for(int i = nums.size() - 1; i >= 0; i --)
     {
          prod = prod * nums[i];
          maxi = max(maxi, prod);
          if(prod == 0)
          prod = 1;
     }
     return maxi;
}
int main()
{
     vector<int> nums = {2,3,-2,4};
     int maxi = maxProduct(nums);
     cout<<"The maximum product is :"<<maxi<<endl;
     return 0;
}