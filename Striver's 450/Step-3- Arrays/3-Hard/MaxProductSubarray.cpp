#include <iostream>

using namespace std;

int maxProdSubarray(int arr[]){
    int beforeNega = 0;
    int currentNega = 1;
    bool toggle = false;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] > 0){
            currentNega *= arr[i];
        }
        if(arr[i] == 0){
            if(currentNega > beforeNega){
                beforeNega = currentNega;
                currentNega = 1;
            }
        }
        else if( arr[i] < 0){

        }
    }
}