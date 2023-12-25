#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k)
{
    int a = arr.size();
    int d = k % a;
    reverse(arr.begin(), arr.end() - d);
    reverse(arr.end() - d, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}

void printArray(const vector<int>& arr)
{
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    printArray(arr);

    arr = rotateArray(arr, k);

    cout << "Array after rotating by " << k << " positions: ";
    printArray(arr);

    return 0;
}
