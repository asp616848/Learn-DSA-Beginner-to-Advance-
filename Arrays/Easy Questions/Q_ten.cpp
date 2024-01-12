#include <bits/stdc++.h>
using namespace std;

//QUESTION - Find Subarray with given sum | Set 1 (Non-negative Numbers)

void printSA(int arr[], int n, int sum){
    //NOTE - Sliding window method
    int start = 0;
    int currSum= 0;
    for(int i =0; i < n; i++){
        while(currSum > sum){
            currSum -= arr[start];
            start++;
        }
        
        if(i< n){ 
            currSum += arr[i];
        }
        if(currSum == sum){
            cout << "We found it between indices ==>"<< start << "and" << i-1;
            return;
        }
    }
}

int main(){
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int sum = 33;
    printSA(arr, n, sum);
    return 0;
}