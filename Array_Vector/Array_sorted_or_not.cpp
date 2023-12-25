#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>&nums)
{
        int count = 0;
        int n = nums.size();
        for(int i = 1; i < nums.size(); i ++)
        {
            if(nums[i]<nums[i-1])
            {
                count ++;
            }
            
        }
        if(nums[n-1] > nums[0])
        {
            count ++;
        }
        return count <= 1;
}
int main()
{
     vector<int> nums = {1, 2, 3, 4, 5};
     bool ans = isSorted(nums);
     cout<<"The array is :"<<ans<<endl;
     return 0;
}