#include<bits/stdc++.h>
using namespace std;
void Reverse(vector<int>&nums)
{
     int start = 0;
     int end = nums.size() - 1;
     while(start < end)
     {
          swap(nums[start], nums[end]);
          start ++;
          end --;
     }
}
void print(vector<int>&nums)
{
     for(int i = 0; i < nums.size(); i ++)
     {
          cout<<nums[i]<<" ";
     }
     cout<<endl;
}
int main()
{
     vector<int> nums = {6, 8, 14, 11, 3, 9};
     cout<<"The reverse array would be : "<<endl;
     Reverse(nums);
     print(nums);
     return 0;
}