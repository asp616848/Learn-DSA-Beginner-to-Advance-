#include<iostream>
using namespace std;

bool possible(int mid, int arr[], int n, int m){
    int studentsRequired = 1;
    int pagesRead = 0;

    for (int i = 0; i < n; i++) {
        if (pagesRead + arr[i] > mid) {
            studentsRequired++;
            pagesRead = arr[i];
            if (studentsRequired > m) {
                return false;
            }
        } else {
            pagesRead += arr[i];
        }
    }

    return true;
}

int minPages(int arr[], int n, int m){
    int low = 0;
    int high = 0;

    for (int i = 0; i < n; i++) {
        high += arr[i];
        if (arr[i] > low) {
            low = arr[i];
        }
    }

    int result = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (possible(mid, arr, n, m)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main(){
    int n = 4;
    int m = 2;
    int arr[] = {12, 34, 67, 90};
    int minPagesToRead = minPages(arr, n, m);
    cout << "Minimum number of pages that each student should read: " << minPagesToRead << endl;
    return 0;
}
