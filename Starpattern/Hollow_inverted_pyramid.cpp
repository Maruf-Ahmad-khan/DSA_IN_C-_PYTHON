#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter n: "<<endl;
     cin>>n;
     for(int row = 0; row<n; row++)
     {
          
          // print spaces
          for(int col = 0; col<row; col++)
          {
               cout<<" ";
          }
                    // print stars
          for(int col =0; col < n-row; col++)
          {
           if(col==0)
               {
                    // First character
                    cout<<"* ";
               }
               else if(col==2*n-(2*row+2))
               {
                    // last character
                    cout<<"* ";
               }
               else{
                    cout<<" ";
               }
     }
     cout<<endl;
}
}