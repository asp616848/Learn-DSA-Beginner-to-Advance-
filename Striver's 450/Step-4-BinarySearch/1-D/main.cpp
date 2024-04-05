#include <iostream>
#include "BinarySearch.cpp"
using namespace std;

int main(){
    int arr[] = {1,2,3,4,7,8};
    cout<<"Found at the element no. "<< findElement(arr,sizeof(arr)/ sizeof(arr[0]), 5) << endl;
    cout << " Found lower bound at the element no." << findLowerBound(arr, sizeof(arr)/ sizeof(arr[0]), 6) << endl;
}