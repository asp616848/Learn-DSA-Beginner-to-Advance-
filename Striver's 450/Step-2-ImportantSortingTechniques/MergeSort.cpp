#include <vector>
#include<iostream>
using namespace std;

//THROUGHOUT THE ALGO, l and r are indices of the original array. while left and right are instance vars

void Merge(int arr[], int l, int mid, int r);

void MergeSort(int arr[], int l, int r){
    if(l >= r){
        return;
    }
    int mid =(l+r)/2;
    MergeSort(arr, l, mid);
    MergeSort(arr, mid+1 , r);
    Merge(arr , l , mid , r);
}

void Merge(int arr[], int l, int mid, int r){
    vector<int> temp;
    int left = l;
    int right = mid+1;

    while(left<=mid && right <= r){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while((right) <= r){
        temp.push_back(arr[right]);
        right++;
    }
    for( int i = l; i <= r; i++){
        arr[i] = temp[i-l];
    }
}