//QUESTION - Find the element that appears once in an array where every other element appears twice

#include <bits/stdc++.h>
using namespace std;

int findOnce(vector<int> arr, int n){
   int res = arr[0];
   for (int i = 1; i < n; i++){
       res = res ^ arr[i];
   }
   return res;
}

int main(){
    vector<int> arr = {1, 2, 3, 1, 2, 9, 8, 9, 8};
    cout << findOnce(arr, arr.size());
    return 0;
}