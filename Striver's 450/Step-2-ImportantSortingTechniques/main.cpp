#include<iostream>
#include "SelectionSort.cpp"
#include "BubbleSort.cpp"
#include "InsertionSort.cpp"
#include "MergeSort.cpp"
#include "RecursiveBubble.cpp"
#include "RecursiveInsertion.cpp"
#include "QuickSort.cpp"
using namespace std;

int main(){
    int arr[] = {45,-5,6,3,6,35,9,5,83,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    //SelectionSort(arr, size);
    //BubbleSort(arr, size);
    // InsertionSort(arr, size);
    //MergeSort(arr, 0, size);
    //RecursiveBubble(arr, size);
    //RecursiveInsertion(arr, 0, size);
    //QuickSort(arr, 0, size-1);

    //_________________________Printing Array_____________________________
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}