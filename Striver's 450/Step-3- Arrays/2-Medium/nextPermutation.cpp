#include <algorithm>
#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start <= end){
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void nextPermutation(int arr[], int n){
    int i = n-1;
    for (i = n-1; i >=0; --i){
        if(arr[i] < arr[i+1]){
            break;
        }
    }
    int min = i+1;
    for (int j = i+1; j < n-1; j++){
        if(arr[j] > arr[i] && arr[j] < arr[min]){
            min = j;
        }
    }
    std::swap(arr[i], arr[min]);
    // reverse(arr, i+1, n-1);
    reverse(arr + i + 1, arr + n);
    cout << "The next permutation is: \n";
    for (int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
}
