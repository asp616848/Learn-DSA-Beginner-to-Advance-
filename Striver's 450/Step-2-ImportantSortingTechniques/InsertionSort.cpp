#include <algorithm>

void InsertionSort(int arr[], int n){
    for(int i = 0 ; i<n; i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            std::swap(arr[j], arr[j-1]);
            j--;
        }
    }
    return;
}