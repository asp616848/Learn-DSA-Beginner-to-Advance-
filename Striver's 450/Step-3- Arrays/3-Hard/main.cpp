#include "pascal's.cpp"
#include <iostream>
#include "4sum.cpp"
#include "XorK.cpp"
#include "mergeOverlapSA.cpp"
#include "mergeSorted.cpp"
#include "countInversions.cpp"
#include "MaxProductSubarray.cpp"

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

    vector<vector<int>> arr1 = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    vector<vector<int>> res1 = mergeOverlaps(arr1);
    for(int i = 0; i < res1.size(); i++){
        for(int j = 0; j < res1[i].size(); j++){
            cout << res1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    vector<int> a1 = {1, 3, 5, 7};
    vector<int> b = {0, 2, 6, 8, 9};
    mergeSorted(a1, b);
    cout << "After Merging: ";
    for(int i = 0; i < a1.size(); i++){
        cout << a1[i] << " ";
    }
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }


    int array[] = {5,4,3,2,1};
    int count = recurssive(array, 0, 4);
    for(int i = 0; i < 5; i++){
        cout << array[i] << " ";
    }
    cout << "Number of Inversions: " << count << endl;
    cout << endl;

    int arr2[] = {6, -3, 10, 0, 2};
    cout << "Max Product Subarray: " << maxProdSubarray(arr2,  sizeof(arr2)/ sizeof(arr2[0])) << endl;

    return 0;
}