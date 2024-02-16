#include <vector>
using namespace std;
vector<int> UnionSorted(vector<int> arr1, vector<int> arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();

    int i = 0;
    int j = 0;
    vector<int> arr3;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            if(arr3.size() == 0 || arr3.back() != arr1[i]) arr3.push_back(arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i] ) {
            if(arr3.size() == 0|| arr3.back() != arr2[j]) arr3.push_back(arr2[j]);
            j++;
        }
    }
    while (i<n1){
        if(arr3.empty() || arr3.back() != arr1[i]) arr3.push_back(arr1[i]);
        i++;
    }
    while (j<n2){
        if(arr3.empty() || arr3.back() != arr2[j]) arr3.push_back(arr2[j]);
        j++;
    }
    return arr3;
}