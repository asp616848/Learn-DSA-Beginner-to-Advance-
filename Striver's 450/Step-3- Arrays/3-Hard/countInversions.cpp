#include <iostream>
using namespace std;
// function declaration
int mergeAndCountInv(int arr[], int start, int middle, int end);
int recurssive(int arr[] , int start, int end){
    if(start == end){
        // size of this is one, hence return
        return 0;
    }
    else{
        int leftCount = recurssive(arr, start, (start+end)/2);
        int RightCount = recurssive(arr, (start+end)/2+1, end);
        int mergeCount= mergeAndCountInv(arr, start, (start+end)/2, end);
        return leftCount + RightCount + mergeCount;
    }
}

int mergeAndCountInv(int arr[], int start, int middle, int end){
    int*p1 = &arr[start];
    int*p2 = &arr[middle+1];
    int i = start;
    int j = middle+1;
    int k = 0;
    int temp[end-start+1];
    int count = 0;

    while(i <= middle && j <= end){
        if(arr[i] > arr[j]){
            temp[k++] = arr[j++];
            count += middle - i + 1;
        }
        else{
            temp[k++] = arr[i++];
        }
    }
    while(i <= middle){
        temp[k++] = arr[i++];
    }
    while(j <= end){
        temp[k++] = arr[j++];
    }
    for(int i = start; i <= end; i++){
        arr[i] = temp[i-start];
    }
    return count;
}
