class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        vector<vector<int>> vec(n+1, vector<int>(m+1, 0)); // each element is initiated as 0

        for(int i = 1; i <=n; i++){
            for(int j = 1; j <= m; j++){
                if(text1[i-1] == text2[j-1]){
                    vec[i][j] = vec[i-1][j-1] + 1;
                }
                else{
                    vec[i][j] = max(vec[i-1][j], vec[i][j-1]);
                }
            }
        }
        return vec[n][m];
    }
};