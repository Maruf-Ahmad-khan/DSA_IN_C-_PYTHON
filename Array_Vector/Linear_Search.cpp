#include<bits/stdc++.h>
using namespace std;
int LinearSearch(vector<int>&nums, int key)
{
     for(int i = 0; i < nums.size(); i ++)
     {
          if(nums[i]==key)
          {
               return i;
          }
     }
     return -1;
}
int main()
{
     vector<int> nums = {1,2,3,4,5,6};
     int key = 10;
     int ans = LinearSearch(nums, key);
     cout<<"The key element is :"<<ans<<endl;
     return 0;
}