#include <iostream>
#include <algorithm>

using namespace std;
//failed, but the real intuition was same as mine with correct implementation
int maxProdSubarray(int arr[], int n){
    int FcurrentVal = 1;// while iterating from front
    int BcurrentVal = 1;// while iterating from back


    int maxVal = 0;

    for(int i = 0; i < n; i++){
        // we iterate from front and back so that all possibilities of negative numbers are 
        //covered and zero is like partition to our product subarray so we initialize back to 1 at all zeros
        FcurrentVal *= arr[i];
        BcurrentVal *= arr[n-1-i];

        if(FcurrentVal == 0){
            FcurrentVal = 1;
        }
        if(BcurrentVal == 0){
            BcurrentVal = 1;
        }

        maxVal = max(max(BcurrentVal, FcurrentVal), maxVal); //find max of all possible subarray products

        // using kadan's algorithm to find max product subarray

        // int max_ending_here = arr[0];
        // int min_ending_here = arr[0];
        // int max_so_far = arr[0];

        // for (int i = 1; i < n; i++) {
        //     int temp = max({ arr[i], arr[i] * max_ending_here,
        //                     arr[i] * min_ending_here });
        //     min_ending_here
        //         = min({ arr[i], arr[i] * max_ending_here,
        //                 arr[i] * min_ending_here });
        //     max_ending_here = temp;
        //     max_so_far = max(max_so_far, max_ending_here);
        // }
    }
    return maxVal;
}