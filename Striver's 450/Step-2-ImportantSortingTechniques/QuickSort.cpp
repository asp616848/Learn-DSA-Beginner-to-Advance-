#include <algorithm>

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(i<= high-1 && arr[i]<= pivot){
            i++;
        }
        while (j >= low+1 && arr[j] > pivot){
            j--;
        }
        if(i<j)std::swap(arr[i], arr[j]);
    }
    std::swap(arr[low], arr[j]);
    return j;
}

void QuickSort(int arr[], int left, int right){
    if(left < right){
        int pIndex = partition(arr, left, right);
        QuickSort(arr, left, pIndex-1);
        QuickSort( arr, pIndex+1, right);
    }
}