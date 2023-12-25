#include <bits/stdc++.h>
using namespace std;
int arrayPariSum(vector<int> &nums)
{
     sort(nums.begin(), nums.end());
     int sum = 0;
     for (int i = 0; i < nums.size(); i += 2)
     {
          sum = sum + nums[i];
     }
     return sum;
}
int main()
{
     vector<int> nums = {1, 4, 3, 2};
     int res = arrayPariSum(nums);
     cout << "The result would be : " << res << endl;
     return 0;
}