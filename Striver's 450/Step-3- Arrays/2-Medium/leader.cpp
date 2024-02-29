#include <iostream>
#include <vector>
using namespace std;
void printLeaders(int array[], int n) {
    int max = array[n-1];
    vector<int> result;
    cout << "Leaders are : [ ";
    for (int i = n-1; i >=0 ; i--){
        if(array[i] >= max){
            result.push_back(array[i]);
            max = array[i];
        }
    }
    for (int i = result.size()-1; i >= 0; i--){
        cout << result[i] << " ,";
    }
    cout << "]";
    return;
}
    