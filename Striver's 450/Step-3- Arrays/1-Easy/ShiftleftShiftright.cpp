#include <vector>
using namespace std;

void reverse(vector<int> &arr, int start, int end){
    int i = start;
    int j = end;
    while(i<j){
        swap(arr[i], arr[j]);
        i++; j--;
    }
    return;
}

void shiftRight(vector<int> &arr, int n){

    reverse(arr, 0, arr.size()-1);
    reverse(arr, n, arr.size()-1);
    reverse(arr, 0, n-1);
    return;
}

void shiftLeft(vector<int> &arr, int n){

    reverse(arr, 0, arr.size()-1);
    reverse(arr, arr.size()-n, arr.size()-1);
    reverse(arr, 0, arr.size()-n-1);
    return;
}