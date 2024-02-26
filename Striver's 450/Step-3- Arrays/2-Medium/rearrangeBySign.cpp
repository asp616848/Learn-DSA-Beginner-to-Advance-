#include <vector>
#include <algorithm>
using namespace std;

vector<int> rearrangeBySign(int arr[], int n){
    int e = 0;
    int o = 1; 
    // even and odd
    vector <int> a(n);
    int k = 0; 
    while(k < n){
        if(arr[k] < 0){
            a[o] = arr[k];
            o+=2;
        }
        else{
            a[e] = arr[k];
            e+=2;
        }
        k++;
    }
    return a;
}

vector<int> rearrangeBySign2(int arr[], int n){ //i can easily do this in 2N, but i want to do it in N so i am skipping it now as it may not be possible.
    int e = 0;
    int o = 1;
    // even and odd
    vector <int> a(n);
    int k = 0;
    while(k < n){
        int temp = min(e, o);

    }
    return a;
}