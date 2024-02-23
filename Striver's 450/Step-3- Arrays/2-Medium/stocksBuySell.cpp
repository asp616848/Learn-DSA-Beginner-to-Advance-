#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void printBuySell(int arr[], int n){
    int maxDiff = 0;
    int maxind = 0;
    int minind = 0;
    //indexes will be stored here

    for( int i = 0; i < n; i ++){
        if(arr[i] < arr[minind]){
            minind = i;
        }
        if((arr[i]- arr[minind])> maxDiff){
            maxDiff = arr[i] - arr[minind];
            maxind = i;
        }
    }
    cout<< "Buy on day: " << minind << " Sell on day: " << maxind << endl;
    cout << "Profit: " << maxDiff << endl;
    return;
}