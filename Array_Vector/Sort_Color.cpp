// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
#include<bits/stdc++.h>
using namespace std;
void Sortcolor(vector<int>&nums)
{
     int i = 0, j = 0, k = nums.size() - 1;
     while(i <= k)
     {
          if(nums[i] == 0)
          {
               swap(nums[i], nums[j]);
               i ++;
               j ++;
          }
          else if(nums[i] == 1)
          {
            i ++;
          }
          else
          {
               swap(nums[i], nums[k]);
               k --;
          }
     }
}
void print(vector<int>&nums)
{
     for(int i = 0; i < nums.size(); i ++)
     {
          cout<<nums[i]<<" "<<endl;
     }
     cout<<endl;
}
int main()
{
     vector<int> nums = {2,0,2,1,1,0};
     cout<<"Sort color is :"<<endl;
     Sortcolor(nums);
     print(nums);
     return 0;
}