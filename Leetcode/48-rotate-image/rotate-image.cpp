class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        /*first transpose the matrix
        then reverse each row
        there you go, you have it*/
        for(int i =0; i < matrix.size(); i++){
            for(int j = i+1; j< matrix[0].size(); j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for(int i =0; i < matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};