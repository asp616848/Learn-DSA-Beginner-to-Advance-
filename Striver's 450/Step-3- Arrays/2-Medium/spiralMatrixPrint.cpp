#include <vector>
#include <iostream>
using namespace std;
void spiralMatrixPrint(vector<vector<int>> arr){
    int top, right, bottom, left;
    int n = arr.size();
    top = 0;
    right = n-1;
    bottom = n-1;
    left = 0;
    cout<< "[" << endl;

    while(top <=bottom && left <= right){
        for(int i = left; i <=right; i++){
            cout<< arr[top][i] << "  ,";
        }
        top++;
        for(int i = top; i <=bottom; i++){
            cout<< arr[i][right] << "  ,";
        }
        right--;

        if(top <= bottom) // to avoid printing the same row twice
        {
            for(int i = right; i >=left; i--){
                cout<< arr[bottom][i] << "  ,";
            }
            bottom--;
        }
        
        if(left <= right) // to avoid printing the same column twice
        {
            for(int i = bottom; i >=top; i--){
                cout<< arr[i][left] << "  ,";
            }
            left++;
        }
    }
    cout<< "]" << endl;
}