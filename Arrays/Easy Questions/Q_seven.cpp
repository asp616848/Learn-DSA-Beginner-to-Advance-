#include <bits/stdc++.h>
using namespace std;

void printDistinct (vector<int> arr, int n){
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        if(!s.count(arr[i])){
            cout << arr[i] << " ";
            s.insert(arr[i]);
        }
    }
}
int main (){
    vector<int> arr = {1, 2, 3, 1, 2, 9, 8, 9};
    printDistinct(arr, arr.size());
    return 0;
}