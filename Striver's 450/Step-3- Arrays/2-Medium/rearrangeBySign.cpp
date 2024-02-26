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