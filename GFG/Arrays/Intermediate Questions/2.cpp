#include<iostream>
using namespace std;

//QUESTION - Rearrange positive and negative numbers in O(n) time and O(1) extra space. negative numbers at odd position and positive at even positions

// void rearrange(int* arr, int n){
//     int l = 0;
//     int r = n-1;

//     while(l<r){
//         cout << l << " :left and right: " << r << "\n";
//         if(l%2 == 0)
//         {

//             if(arr[l] >= 0){
//                 l++;
//                 continue;
//             }
//             else
//             {
//                 if(! (arr[r] < 0)){
//                     r--;
//                     continue;
//                 }
//                 if(arr[r] >= 0){
//                     l++;
//                     r =n-1;
//                     continue;
//                 }
//             }
//         }
//         else{
//             if(arr[l] < 0){
//                 l++;
//                 continue;
//             }
//             else
//             {
//                 if(arr[r] >= 0){
//                     r--;
//                     continue;
//                 }
//                 if(arr[r] < 0){
//                     l++;
//                     r =n-1;
//                     continue;
//                 }
//             }
//         }
//     }
//     cout << "[";
//     for(int i = 0; i<n; i++){
//         cout << arr[i] << "  ,  ";
//     }
//     cout << "]";
//     return;
// }

void rearrange(int* arr, int n){
    int negIdx = 1;
    int posIdx = 0;

    while (negIdx < n && posIdx < n) {
        if (arr[negIdx] < 0) {
            negIdx += 2;
        } else {
            swap(arr[negIdx], arr[posIdx]);
            posIdx += 2;
        }
    }

    cout << "[";
    for(int i = 0; i < n; i++){
        cout << arr[i] << "  ,  ";
    }
    cout << "]";
}

int main(){
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    return 0;
}
