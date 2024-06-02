#include <bits/stdc++.h>

using namespace std;
// Minimise Maximum Distance between Gas Stations

bool check(){

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

    }
}

int main() {
}