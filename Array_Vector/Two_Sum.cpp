// Two sum
// nums = [3,3], target = 6
// output = [0,1]
#include<bits/stdc++.h>
using namespace std;
vector<int> TwoSum(vector<int>&nums, int target)
{
     for(int i = 0; i < nums.size(); i ++)
     {
          for(int j = i + 1; j < nums.size(); j++)
          {
               if(nums[i] + nums[j] == target)
                    return{i, j};
               
          }
     }
     return {};
}
int main()
{
     vector<int> nums = {3,3};
     int target = 6;
     vector<int> res = TwoSum(nums, target);
     cout<<"The two sum is :"<<res[0]<<","<<res[1]<<endl;
     return 0;
}