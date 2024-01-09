#include <bits/stdc++.h>
using namespace std;

//QUESTION - Rearrange array such that even positioned are greater than odd

int main(){
    int arr[] = {1, 3, 2, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int Sarr[n];
    for(int i = 0; i < n; i++){
        Sarr[i] = arr[i];
    }
    sort(Sarr, Sarr + n);  //REVIEW - O(nlogn)
    
    int start = 0;
    int end = n -1;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            arr[i] = Sarr[end--];
        }
        else{
            arr[i] = Sarr[start++];
        }
    }
    cout << "Rearranged array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //NOTE -  a copy for second approach
    int newArr[] = {1, 3, 2, 2, 5};
    int N = sizeof(newArr) / sizeof(newArr[0]);
    for(int i =1; i<N; i++){
        if(i % 2 == 0){
            if(newArr[i] < newArr[i-1]){
                swap(newArr[i], newArr[i-1]);
            }
        }
        else{
            if(newArr[i] > newArr[i-1]){
                swap(newArr[i], newArr[i-1]);
            }
        }
    }
    cout << "Rearranged array of method two(O(n)) is: ";
    for(int i = 0; i < N; i++){
        cout << newArr[i] << " ";
    }
    cout << endl;
    return 0;
}

