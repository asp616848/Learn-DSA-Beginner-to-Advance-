class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> sol = {};
            if(numRows==1){
                sol.push_back({1});
                return sol;
            }
            for(int i = 0; i < numRows; i++){
                if(i==0){
                    sol.push_back({1});
                    continue;
                }
                sol.push_back(vector<int>(i + 1, 1));
                for(int j =1; j<i; j++){
                    sol[i][j] = sol[i-1][j-1]+sol[i-1][j];
                }
            }
            return sol;
        }
    };