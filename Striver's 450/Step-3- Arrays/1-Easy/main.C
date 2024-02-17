#include "findTheNumberThatAppearsOnce.cpp"
#include "longestSubarrayWithSumK.cpp"
#include <bits/stdc++.h>
#include "moveZerosToEnd.cpp"
#include "UnionSorted.cpp"
#include "RemoveDuplicates.cpp"
#include "ShiftleftShiftright.cpp"
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

    vector<int> c = { 4,0, -1, 0 ,34,2,4,0, 0 ,1,0};
    move0toend(c);
    cout<< "the array with zeros at end is : "; 
    for ( int i = 0; i< c.size(); i++){
        cout << c[i] << " ,";
    }

    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12}; 
    vector<int> d = UnionSorted(arr1, arr2);
    cout<< "\n the array with merging done: "; 
    for ( int i = 0; i< d.size(); i++){
        cout << d[i] << " ,";
    }

    vector<int> e = {1, 2, 3, 3, 3, 6, 7, 8, 8, 8, 10};
    cout<< "\n the array duplicates removed is: "; 
    RemoveDuplicates(e);
    for ( int i = 0; i< e.size(); i++){
        cout << e[i] << " ,";
    }

    vector<int> f = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> g = {1, 2, 3, 4, 5, 6, 7, 8};
    shiftRight(f, 5);
    shiftLeft(g, 4);
    cout<< "\n the array shift Right by 5:  "; 
    for ( int i = 0; i< f.size(); i++){
        cout << f[i] << " ,";
    }
    cout<< "\n the array shift Left by 4:  "; 
    for ( int i = 0; i< g.size(); i++){
        cout << g[i] << " ,";
    }


    cout<< endl;
}