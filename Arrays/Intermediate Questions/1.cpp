#include<iostream>
#include <thread>
#include <chrono>
#include <stdexcept>
using namespace std;

//QUESTION - Rearrange an array such that arr[i] = i

void rearrange(int arr[], int n){
    for(int i = 0; i<n; i++){
        if(arr[i] >= 0 && arr[i] < n && arr[i] != i){
            swap(arr[i], arr[arr[i]]);
            i--;
        }
        else if(arr[i] == i){
            continue;
            if(i = n-1){
                break;
            }
        }
        else{
            arr[i] = -1;
        }
    }

    for(int i = 0; i< n; i++){
        cout << arr[i] << "<==>";
    }
    return;
}

int main(){
    int n, arr[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
    n = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr, n);
    return 0;
}