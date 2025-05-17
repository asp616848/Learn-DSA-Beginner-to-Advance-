class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> row = {};
        unordered_set<int> col = {};
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j< matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int i: row){
            for(int j = 0; j< matrix[0].size(); j++){
                matrix[i][j]= 0;
            }
        }
        for(int i: col){
            for(int j = 0; j< matrix.size(); j++){
                matrix[j][i]= 0;
            }
        }
    }
};