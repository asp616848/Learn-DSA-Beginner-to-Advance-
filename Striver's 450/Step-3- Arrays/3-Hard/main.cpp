#include "pascal's.cpp"
#include <iostream>
#include "4sum.cpp"
#include "XorK.cpp"
#include "mergeOverlapSA.cpp"
using namespace std;

int main(){
    int n;

    n = 9;
    printnRowPascalTri(6,-1);
    cout << endl;

    vector<int> a = {1, 0, -1, 0, -2, 2};
    int sum = 0;
    
    vector<vector<int>> res = fourSum(a, sum);
    cout << res.size() << endl;
    
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    int arr[] = {4, 2, 2, 6, 4};
    int k = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout <<" Number of Subarrays with XOR k is: "<< XorK(arr, size, k) << endl;

    vector<vector<int>> arr1 = {{1, 3}, {2, 6}, {8, 10}, {15, 18}, {1, 3}, {2, 6}, {8, 10}, {15, 18}, {1, 3}, {2, 6}, {8, 10}, {15, 18}, {1, 3}, {2, 6}, {8, 10}, {15, 18}, {1, 3}, {2, 6}, {8, 10}, {15, 18}};

    vector<vector<int>> res1 = mergeOverlaps(arr1);
    for(int i = 0; i < res1.size(); i++){
        for(int j = 0; j < res1[i].size(); j++){
            cout << res1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}