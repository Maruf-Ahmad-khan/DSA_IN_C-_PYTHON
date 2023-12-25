#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter n :"<<endl;
     cin >>n;
     cout<<"Your pattern will be :"<<endl;
     for(int row = n; row > 0; row --)
     {
          for(int col = row; col >= 0; col --)
          {
              if(row == 0 || row == col || col == n - 1)
              {
               cout<<col + 1<<" ";
              }
              else
              {
               cout<<" ";
              }
          }
          cout<<endl;
     }
     return 0;
}