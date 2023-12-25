// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
     map<int, int> ans;
     for (int i = 0; i < nums.size(); i++)
     {
          ans[nums[i]]++;
     }
     for (auto it : ans)
     {
          if (it.second > (nums.size() / 2))
          {
               return it.first;
          }
     }
     return -1;
}
int main()
{
     vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
     int ans = majorityElement(nums);
     cout << "The majority Element will be :" << ans << endl;
     return 0;
}