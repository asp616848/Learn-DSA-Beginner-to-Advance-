#include<algorithm>
#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    int itr = n-1;

    while(itr >= 0) {
        bool isSwapped = 0;
        for(int i=0; i < n-1; i++){
            if(arr[i]> arr[i+1]){
                std::swap(arr[i], arr[i+1]);
                isSwapped = 1;
            }
        }
        if(!isSwapped){  //if no swap happened then the rest of the array must be sorted as all the adjacent arrys are sorted.
            cout << "Breaking"<< (n-itr)<< endl; //also prints the iterations after which code broke and sorted
            break;
        }
        isSwapped = 0;
        itr--;
    }

}