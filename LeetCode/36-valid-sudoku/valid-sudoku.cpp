class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            unordered_map<char,bool> hm;
            for(int j = 0; j < 9; j++){ // identify identical elements in rows
                if (board[i][j] != '.') {
                    if (hm.find(board[i][j]) != hm.end()) {
                        return false;
                    }
                    hm[board[i][j]] = true;
                }
            }
        }
        for(int i = 0; i < 9; i++){
            unordered_map<char, bool> boxCheck;

            unordered_map<char,bool> hm;
            for(int j = 0; j <9 ; j++){ // identify identical elements in columns
                if (board[j][i] != '.') {
                    if (hm.find(board[j][i]) != hm.end()) {
                        return false;
                    }
                    hm[board[j][i]] = true;
                }

                int rowIndex = 3 * (i / 3) + j / 3;
                int colIndex = 3 * (i % 3) + j % 3;
                if(board[rowIndex][colIndex] != '.') {
                    if(boxCheck.find(board[rowIndex][colIndex]) != boxCheck.end()) {
                        return false;
                    }
                    boxCheck[board[rowIndex][colIndex]] = true;
                }
            }
        }
        
        
        return true;
    }// time complexity is O(1) or O(18)
};