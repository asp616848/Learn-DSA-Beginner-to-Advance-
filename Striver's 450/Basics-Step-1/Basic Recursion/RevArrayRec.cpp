#include<iostream>
using namespace std;

void reverseArr(int (&arr)[], int start, int end){  //receiving value of array as reference
    if(!(start < end)){
        return;
    }
    swap(arr[start], arr[end]);
    return reverseArr(arr, start+1, end-1);
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0; i<n; i++){
        cout<< arr[i]<< endl;
    }
    reverseArr(arr,0, n-1);
    for(int i = 0; i<n; i++){
        cout<< arr[i]<< endl;
    }
    return 0;
}