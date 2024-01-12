#include<iostream>
#include<vector>
using namespace std;

//QUESTION - Leaders in an array

void printLeads(vector<int> arr, int n){
    int max = arr[n-1];
    cout << "[" << arr[n-1] << ", ";
    for(int i = n-2; i>=0; i--){
        if (arr[i] > max){
            cout << arr[i] << ", " ;
            max = arr[i];
        }
    }
    cout<<"]";
}
int main(){
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    printLeads(arr, arr.size());
    return 0;
}