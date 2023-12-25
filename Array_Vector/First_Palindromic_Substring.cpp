// Given an array of strings words, 
// return the first palindromic string in the array.
//  If there is no such string, return an empty string "".
// Input: words = ["abc","car","ada","racecar","cool"]
// Output: "ada"
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
     int left = 0;
     int right = s.size() - 1;
     while (left <= right)
     {
          if (s[left] != s[right])
          {
               return 0;
          }
          else
          {
               left++;
               right--;
          }
     }
     return 1;
}
string firstPalindrome(vector<string> &words)
{
     string ans = "";
     for (int i = 0; i < words.size(); i++)
     {
          if (isPalindrome(words[i]))
          {
               return words[i];
          }
     }
     return ans;
}
int main()
{
     vector<string> words = {"abc", "car", "ada", "racecar", "cool"};
     string ans = firstPalindrome(words);
     cout << "The first palindromic substring is :" << ans << endl;
     return 0;
}