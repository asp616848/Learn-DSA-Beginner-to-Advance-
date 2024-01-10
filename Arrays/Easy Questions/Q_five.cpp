#include <iostream>
using namespace std;
//QUESTION - Segregate odd and even numbers using Lomuto' partition
//NOTE - - whenever an even number is found swap it with the index j representing 
//current first index and increment j so that all even are put at first

void segregate(int arr[], int n){
    int j = 0, i = 0;
    for(int i =0; i<n; i++){
        if(arr[i] % 2 == 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){

    int arr[] ={3,5,3,6,21,6,84,45,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    segregate(arr, n);
    cout << "[";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}

//found a better code with O(n/2) and auxiliary space 1;
/*
#include <iostream>
using namespace std;

void segregate(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        while (arr[left] % 2 == 0 && left < right)
            left++;
        while (arr[right] % 2 != 0 && left < right)
            right--;

        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {3, 5, 3, 6, 21, 6, 84, 45, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregate(arr, n);

    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}*/
