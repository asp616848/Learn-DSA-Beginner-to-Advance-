#include <climits>
#include <iostream>
using namespace std;

//QUESTION - Smallest missing element in sorted array in O(logn) time

bool arrayContains(int arr[], int x){
    for(int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++){
        if(arr[i] == x){
            return true;
        }
    }
    return false;
}

int findFirstMissing(int arr[], int end, int start){
    
    if (arr[start] != start && !arrayContains(arr, start)){
        return start;
    }
    int mid = (start + end)/2;
    if(arr[mid] != mid){
        return findFirstMissing(arr, mid+1, start);
    }
    else{
        return findFirstMissing(arr, end, mid+1);
    }
}


int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 6, 7};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout << findFirstMissing(arr, n, 0);
}