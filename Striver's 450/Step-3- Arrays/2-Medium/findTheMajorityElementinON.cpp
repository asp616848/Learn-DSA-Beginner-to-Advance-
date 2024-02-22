#include <iostream>
using namespace std;

int findMajority(int arr[], int n){ // majority means it occurs more than n/2 times in the array
    int count = 0;
    int current = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i] == current){
            count++;
            cout << "\nFIRST IF \n";
        }
        else if(arr[i] != current && count == 0){
            current = arr[i];
            count++;
            cout << "\nSECOND IF \n";

        }
        else if(arr[i] != current){
            count--;
            cout << "\nTHIRD IF \n";

        }
    }
    return current;
}