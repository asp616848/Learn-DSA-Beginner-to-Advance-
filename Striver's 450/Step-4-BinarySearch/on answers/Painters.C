#include <bits/stdc++.h>

using namespace std;

int totalTime(vector<int> arr, int k){ //k is the number of painters amoung whom we have to devide
    int l = *max_element(arr.begin(), arr.end());
    int h = accumulate(arr.begin(), arr.end(),0);
    int res = 0;
    while(l<=h){
        int mid = (l+h)/2;
        if(check(arr,mid, k)){
            res = mid;
        }
        
    }
}
bool check(vector<int> arr,int mid, int k){
    int currentLoad = 0;
    int i = 0;
    while(k){
        if(currentLoad+arr[i] > mid){
            currentLoad = 0;
            k--;
        }else{
            currentLoad += arr[i];
        }
        i++;
    }
}

int main(){

}