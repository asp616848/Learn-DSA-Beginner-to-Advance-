#include <bits/stdc++.h>
using namespace std;
bool valid(int gap, vector<int> arr, int k){
    int n = arr.size();
    k--; //first cow to first index
    int last = arr[0];
    for(int i = 0; i<n; i++){
        if((arr[i]- last) >= gap){
            k--;
            last = arr[i];
        }
    }
    if(k <= 0){
        return true;
    }
    else{return false;}
}
int aggressiveCows(vector<int> arr, int n, int k){
    sort(arr.begin(), arr.end());
    int res = -1;
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());
    while(low<=high){
        int mid = (low+high)/2;
        if(valid(mid, arr, k)){
            low = mid+1;
            res = mid;
        }else{
            high = mid-1;
        }
    }
    return res;
}


int main(){
    vector<int> arr = {4,2,1,3,6};
    int n = arr.size();
    int k = 2;
    cout<<aggressiveCows(arr, n, k);
    return 0;
}
