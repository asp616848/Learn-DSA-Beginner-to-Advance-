#include <iostream>
#include <climits>
using namespace std;
//QUESTION - Find the largest three distinct elements in an array
void largestThree(int arr[], int n, int LT[]) {
    
    int max1 = arr[0];
    int max2 = arr[0];
    int max3 = arr[0];

    for(int i =0; i<n; i++){
        if(arr[i] > max1){
            max1 = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] > max2 && arr[i] < max1){
            max2 = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] > max3 && arr[i] < max2){
            max3 = arr[i];
        }
    }
    LT[0] = max1;
    LT[1] = max2;
    LT[2] = max3;
    return;
}


void main() {
    int arr[] = {10, 4, 3, 50, 23, 90};
    int LT[3];
    int n = sizeof(arr)/sizeof(arr[0]);
    largestThree(arr, n, LT);
    for(int i =0; i<3; i++){
        cout<<LT[i]<<" ";
    }
    cout <<endl;
    return;
}