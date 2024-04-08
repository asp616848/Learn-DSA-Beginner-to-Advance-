#include <iostream>
using namespace std;

int findNonRepeating(int arr[], int n){
    int s = 0;
    int e = n-1;
    int i = 1;
    while(s <=e){
        // if (i < 15){cout << s << " " << e << endl;}
        // i++;

        if (arr[s] != arr[s+1]){
            return arr[s];
        }
        int mid = s+ (e-s)/2;
        if(mid%2 == 0){
            if(mid + 1 < n && arr[mid] == arr[mid+1]){
                s = mid+2;
            }
            else{
                e = mid;
            }
        }
        else{
            if(mid - 1 >= 0 && arr[mid] == arr[mid-1]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }
    return arr[s]+1;
}