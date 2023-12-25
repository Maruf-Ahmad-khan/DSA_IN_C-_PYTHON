// Given an integer array nums,
// move all 0's to the end of it while
// maintaining the relative order of the non-zero elements.
// nums = [0,1,0,3,12]
// output = [1,3,12,0,0]
#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{
     int j = 0;
     for (int i = 0; i < nums.size(); i++)
     {
          if (nums[i] != 0)
          {
               swap(nums[i], nums[j]);
               j++;
          }
     }
}
void print(vector<int> &nums)
{
     for (int i = 0; i < nums.size(); i++)
     {
          cout << nums[i] << " " << endl;
     }
     cout << endl;
}
int main()
{
     vector<int> nums = {0, 1, 0, 3, 12};
     cout << "The new array is :" << endl;
     moveZeroes(nums);
     print(nums);
     return 0;
}