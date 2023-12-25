// Write a program to move negative elements to the left side of the array
#include <bits/stdc++.h>
using namespace std;
void Movenegative(vector<int> &nums)
{
     int left = 0;
     int right = nums.size() - 1;
     while (left < right)
     {
          if (nums[left] < 0)
          {
               left++;
          }
          else if (nums[right] > 0)
          {
               right--;
          }
          else
          {
               swap(nums[left], nums[right]);
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
     vector<int> nums = {-1, -2, 3, 4, 5, 6, -7, -8};
     cout << "The new array after moving the negative elements to the left :" << endl;
     Movenegative(nums);
     print(nums);
}