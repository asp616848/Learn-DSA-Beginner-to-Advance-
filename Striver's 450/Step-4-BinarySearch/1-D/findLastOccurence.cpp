#include<bits/stdc++.h>

using namespace std;

int solve(int n, int key, vector < int > & v) {
  int start = 0;
  int end = n - 1;
  int res = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (v[mid] == key) {
      res = mid;
      start = mid + 1;

    } else if (key < v[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return res;
}



int findLastOcc(int arr[], int size, int a){
    int s = 0;
    int e = size-1;
    int result = -2;
    while(s<=e){
        if(arr[s + (e - s) / 2] == a){
            result = s + (e - s) / 2;
            s = s + (e - s) / 2+1;
        }
        else if( arr[s + (e - s) / 2] > a ){
            e = s + (e - s) / 2 -1;
        }
        else {
            s = s + (e - s) / 2 +1;
        }
    }
    return result+1;
}


