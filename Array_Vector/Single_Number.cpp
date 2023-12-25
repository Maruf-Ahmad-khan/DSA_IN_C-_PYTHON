// Single Number
// nums = [2,2,1]
// output = 1
#include <bits/stdc++.h>
using namespace std;
int SingleNumber(vector<int> &nums)
{
     int ans = 0;
     for (int i = 0; i < nums.size(); i++)
     {
          ans = ans ^ nums[i];
     }
     return ans;
}
int main()
{
     vector<int> nums = {2, 2, 1};
     int res = SingleNumber(nums);
     cout << "Single Number is : " << res << endl;
     return 0;
}