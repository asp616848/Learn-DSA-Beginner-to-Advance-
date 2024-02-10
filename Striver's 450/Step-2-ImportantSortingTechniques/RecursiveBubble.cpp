#include <algorithm>
void RecursiveBubble(int arr[], int n){
    int itr = n;
    bool isSwapped = 0;
    for(int i=0; i < itr; i++){
            if(arr[i]> arr[i+1]){
                std::swap(arr[i], arr[i+1]);
                isSwapped = 1;
            }
        }
    if(!isSwapped){  //if no swap happened then the rest of the array must be sorted as all the adjacent arrys are sorted.
        return;
    }
    return RecursiveBubble(arr, n-1);
}