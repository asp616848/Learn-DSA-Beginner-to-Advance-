#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> arr, int mid, int k) {
    int currentLoad = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (currentLoad + arr[i] > mid) {
            // Current painter cannot take more load, use a new painter
            k--;
            currentLoad = arr[i];
            // If more painters are required than available, return false
        } else {
            currentLoad += arr[i];
        }
    }
    if (k <= 0) {
                return false;
            }
    return true; // If all boards are painted with the given number of painters
}

int totalTime(vector<int> arr, int k){ //k is the number of painters amoung whom we have to devide
    int l = *max_element(arr.begin(), arr.end());
    int h = accumulate(arr.begin(), arr.end(),0);
    int res = h;
    while(l<=h){
        int mid = l + (h - l) / 2;
        if(check(arr,mid, k)){
            res = mid;
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return res;
}

int main() {
    vector<int> arr = {10, 20, 30, 40}; // Example lengths of boards
    int k = 2; // Number of painters
    cout << "Minimum time required: " << totalTime(arr, k) << endl;
    return 0;
}