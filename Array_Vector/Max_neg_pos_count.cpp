// Maximum Count of Positive Integer and Negative Integer
// Input: nums = [-2,-1,-1,1,2,3]
// Output: 3
#include <bits/stdc++.h>
using namespace std;
int maxcount(vector<int> &nums)
{
     int p = 0, n = 0;
     for (int i = 0; i < nums.size(); i++)
     {
          if (nums[i] < 0)
               n++;
          if (nums[i] > 0)
               p++;
     }
     return max(n, p);
}
int main()
{
     vector<int> nums = {-2, -1, -1, 1, 2, 3};
     int res = maxcount(nums);
     cout << "The maximum count of negative and positive numbers are :" << res << endl;
     return 0;
}