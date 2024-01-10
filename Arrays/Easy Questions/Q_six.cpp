#include <bits/stdc++.h>
using namespace std;

int numOfTriangleBS(vector<int> arr, int n){ //NOTE - Binary Search method
    sort(arr.begin(), arr.end());  //this is how sor is used with vectors
    
    int count = 0;
    for(int i = 0; i < n-2; i++){
        int k = i+2;
        for(int j = i+1; j<n; j++){
            while(arr[i]+arr[j] > arr[k] && k < n){
                ++k;
            }
            if(k>j){
                count += (k-j-1);}
        }
    }
    return count;
}
int numOfTriangleTP(vector<int> arr, int n) {  //FIXME - try to do the same with i pointing to first element of arr
    sort(arr.begin(), arr.end());
    int count = 0;
    for (int i = n - 1; i >= 1; i--) {
		int l = 0, r = i - 1;
		while (l < r) {
            cout << arr[r] << "+" << arr[l] << "> DOOK >" << arr[i] << endl;
			if (arr[l] + arr[r] > arr[i]) {
				count += r - l;
				r--;
			}
			else
				l++;
            cout << "  " << i << "  " << l << "  " << r << endl;
		}
	}
    return count;
}


// int twoPointer(vector<int> arr, int n){ //REVIEW - failed to solve
//     sort(arr.begin(), arr.end());
//     int count = 0;
    
//     for(int i = 0; i < n-2; i++){
//         int left = i+1;
//         int right = n-1;
//         cout << "FOR  " << i << "  " << left << "  " << right << endl;
//         while(left < right){
//             cout << arr[left] << "+" << arr[right] << "> LOOK >" << arr[i] << endl;
//             if( arr[left] + arr[right] > arr[i]){
//                 cout << "TRUE";
//                 count += right-left;
//                 left++;
//             }
//             else{
//                 cout << "FALSE";
//                 right--;
//             }
//             cout << "  " << i << "  " << left << "  " << right << endl;
//         }
//     }
//     cout << count << "  TP-2  " << endl;
//     return count;
// }

int main(){
    vector<int> A = { 2, 6, 10, 21, 22};
    int n = A.size();
    int i = numOfTriangleBS(A, n);
    int j = numOfTriangleTP(A, n);
    
    cout << endl << i << "  BS  " << endl;
    cout << j << "  TP  " << endl;
    twoPointer(A, n);

    return 0;
}