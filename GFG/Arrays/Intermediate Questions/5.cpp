//QUESTION - Diference Array Rnage Update Query in O(1) time

#include <iostream>
using namespace std;

void update(int arr[], int n, int l, int r, int x){
    arr[l] += x;
    if(r + 1 < n){
        arr[r + 1] -= x;
    }
}

void print(int arr[], int arr1[], int n){
    arr1[0] = arr[0];
    cout << arr1[0] << " ";
    for(int i = 1; i < n; i++){
        arr1[i] = arr[i] + arr1[i-1];
        cout << arr1[i] << " ";  // Corrected this line to print the updated array
    }
    cout << endl;
}

int main(){
    int arr1[] = { 10, 5, 20, 40 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr[n]; 
    arr[0] = arr1[0];

    for(int i = 1; i < n; i++){  // Creating the difference array
        arr[i] = arr1[i] - arr1[i-1];
    }
    update(arr, n , 0 , 1, 10);
    print(arr, arr1, n);
    update(arr, n , 1, 3, 20);
    update(arr, n , 2, 2, 30);
    print(arr, arr1, n);
    return 0;
}