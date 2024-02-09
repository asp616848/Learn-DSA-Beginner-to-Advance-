#include<algorithm>

void SelectionSort(int arr[], int n){
    for(int j =0; j<n; j++){
        int mini = j;
        for(int i = j+1; i<n; i++){
            if(arr[i] < arr[mini]){
                mini = i;
            }
            std::swap(arr[mini], arr[j]);
        }
    }
    return;
}

