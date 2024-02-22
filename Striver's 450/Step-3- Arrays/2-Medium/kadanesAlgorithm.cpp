#include <iostream>
using namespace std;
int* findMaxSumSubArray(int arr[], int n){
    int *ptr = new int[3]; //NOTE - for Storing the max, starting index and last index respectively
    int current = 0;
    ptr[1] = 0;
    ptr[2] ;
    int start = 0;
    int end = 0;
    for (int i = 0; i<n; i++){
        current += arr[i];
        if(current < 0 ){
            current = 0;
            start = i+1;
            cout<< "in " << i << " iteration"<< current << " is " << ": current POSITIVE max: " << ptr[0] << "  in the range of " << ptr[1] << " to " << ptr[2] << endl;
        }
        else{
            end = i;
            if(current > ptr[0]){
                ptr[0] = current;
                cout<< "in " << i << " iteration"<< current << " is " << ": current more than the max: " << ptr[0] << "  in the range of " << ptr[1] << " to " << ptr[2] << endl;
                ptr[2] = end; //end index
                ptr[1] = start; //start index
            }else{
                cout<< "in " << i << " iteration"<< current << " is " << ": current less than the max: " << ptr[0] << "  in the range of " << ptr[1] << " to " << ptr[2] << endl;
            }
        }
    }
    return ptr;
}