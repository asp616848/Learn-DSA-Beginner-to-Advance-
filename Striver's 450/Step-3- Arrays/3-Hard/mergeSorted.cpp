//Don't Use additional space

#include <bits/stdc++.h>
using namespace std;

void mergeSorted(vector<int> &a, vector<int> &b){
    int n = a.size();
    int m = b.size();
    int gap = ceil((n + m)/2.0);
    while( gap > 0){
        int i = 0;
        int j = i+gap;
        while(j<n+m){
            if( i < n && j < n){
                if (a[i] > a[j]) {
                    swap(a[i], a[j]);
                }
            }
            else if( i < n && j >= n && j < n+m){
                if (a[i] > b[j-n]) {
                    swap(a[i], b[j-n]);
                }
            }
            else if (i >= n && j >= n && j < n+m){
                if ( b[i-n] > b[j-n]){
                    swap(b[i-n], b[j-n]);
                }
            }
            i++;
            j++;
        }
        if (gap <= 1){
            break;
        }
        gap = ceil(gap/2.0);
    }
}