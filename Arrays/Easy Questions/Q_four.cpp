#include<iostream>
using namespace std;
//QUESTION -Rearange in maxMin form from a given sorted array
int* maxMin(int Sarr[], int n){
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = Sarr[i];
    }
    for(int i = 0; i<n; i++){
        if(i % 2 == 0){
            Sarr[i] = arr[n-1-i/2];
        }
        else{
            Sarr[i] = arr[i/2];
        }
    }
    return Sarr;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* Sarr = maxMin(arr, n);
    cout << "MaxMin form of the array is: ";
    for(int i = 0; i < n; i++){
        cout << Sarr[i] << " ";
    }
    cout << endl;
    return 0;
}