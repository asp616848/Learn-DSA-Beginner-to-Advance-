class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        
        // Initialize two arrays to store the DP values for the current and previous rows
        vector<int> prev(m + 1, 0), curr(m + 1, 0);
        
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(text1[i - 1] == text2[j - 1]) {
                    curr[j] = prev[j - 1] + 1;
                } else {
                    curr[j] = max(prev[j], curr[j - 1]);
                }
            }
            // Swap the current and previous row
            prev = curr;
        }
        
        return prev[m];
    }
};
