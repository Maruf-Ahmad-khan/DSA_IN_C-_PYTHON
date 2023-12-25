#include <iostream>
// Print the value of 1 to N prime number.
using namespace std;
bool CheckPrime(int n)
{
     for (int i = 2; i < n; i++)
     {
          if (n % i == 0)
          {
               return false;
          }
     }
     return true;
}
int main()
{
     int n;
     cout << "Enter the value :" << endl;
     cin >> n;
     cout << "The value of prime number is :" << endl;
     for (int i = 2; i < n; i++)
     {
          bool isPrime = CheckPrime(i);
          if (isPrime)
          {
               cout << i << endl;
          }
     }
     return 0;
}