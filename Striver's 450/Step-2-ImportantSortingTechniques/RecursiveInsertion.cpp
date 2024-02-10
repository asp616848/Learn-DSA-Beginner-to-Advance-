#include<algorithm>

void RecursiveInsertion(int arr[] ,int s, int n){
    if(s == n-1){
        return;
    }
    int l =s;
    while(l>=0 && arr[l+1] < arr[l]){
        std::swap(arr[l+1], arr[l]);
        l--;
    }
    return RecursiveInsertion(arr, s+1, n);
}