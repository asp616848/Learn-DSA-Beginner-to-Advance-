#include "findTheNumberThatAppearsOnce.cpp"
#include "longestSubarrayWithSumK.cpp"
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,4,5,5,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << nonRepeatetiveNumber(arr, n)<< endl;

    vector<int> a = { -1, -1, 1};
    int k = 1;
    cout<< "\nLongest Subarray length" << returnLen(a, k)<< endl;

    vector<int> b = { 4, 2, 1, 0, 3, 1};
    cout<< "\nLongest Subarray length" << posReturnLen(b, k)<< endl;
}