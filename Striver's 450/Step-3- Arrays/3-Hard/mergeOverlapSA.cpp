//Merge Overlapping subarrays
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> mergeOverlaps(vector<vector<int>> arr){
    int n = arr.size();
    vector<vector<int>> ans;

    cout << sizeof(arr) << " : "<<sizeof(arr[0]) << endl;
    
    ans.push_back(arr[0]);

    for (int i = 0; i < n; i++){
        if(ans.back()[1] >= arr[i][0]){
            ans.back()[1]<arr[i][1] ? ans.back()[1] = arr[i][1]:0;
        }
        else{
            ans.push_back(arr[i]);
        }
    }

    return ans;
}