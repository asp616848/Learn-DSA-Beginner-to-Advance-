#include <vector>
#include <iostream>
using namespace std; // best time and space complexity is O(n*m) and O(m*n) respectively
void spiralMatrixPrint(vector<vector<int>> arr){
    int top, right, bottom, left;
    top = 0;
    right = arr.size()+1;
    bottom = arr[0].size()-1;
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


//the if statements are for the edge cases where the top and bottom or left and right are the same specially in matrixes with one row or column

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