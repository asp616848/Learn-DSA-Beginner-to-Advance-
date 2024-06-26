#include <bits/stdc++.h>

using namespace std;
// Minimise Maximum Distance between Gas Stations

bool check(int dist, vector<int> arr, int k){
    int n = arr.size();
    int cnt = 0;
    for(int i = 1; i < n; i++){
        int stationsInBetween =(arr[i]- arr[i-1]);
        if ((arr[i] - arr[i - 1]) == (dist * stationsInBetween)) {
            stationsInBetween--;
        }
        cnt += stationsInBetween;
    }
    if(cnt < k){
        return false;
    }else{
        return true;
    }
}

int maxDistMinimized(vector<int> arr, int k){
    int n = arr.size();
    int h  = -1;
    for(int i = 0; i<n; i++){
        if(arr[n-1]){break;}
        int a = (arr[i+1]-arr[i]);
        if(a >  h){
            h = a;
        }
    }
    h /= 2;
    int l = 0;

    while(l<=h){
        int mid = l+(h-l)/2;
        if(check(mid, arr, k)){
            l = mid;
        }
        else{
            h = mid;
        }

    }
}

int main() {
    int n, k;
    cout << "Enter the number of gas stations: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the positions of the gas stations: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the number of additional stations to add: ";
    cin >> k;

    int result = maxDistMinimized(arr, k);
    cout << "The minimized maximum distance is: " << result << endl;

    return 0;
}