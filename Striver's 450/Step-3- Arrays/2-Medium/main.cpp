#include <iostream>
#include <vector>
#include "sort012.cpp"
#include "TwoSum.cpp"
using namespace std;

int main(){
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    if(twoSum(arr, 2)){
        cout<< "true\n\n";
    }
    else{
        cout<< "false\n\n";
    }
    sort012(arr);
    cout << "After sorting:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}