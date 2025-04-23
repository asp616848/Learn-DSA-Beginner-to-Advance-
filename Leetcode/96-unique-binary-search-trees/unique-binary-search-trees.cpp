class Solution {
public:
    vector<int> memo = vector<int>(1000, -1);
    int numTrees(int n) {
        if(memo[n] != -1){
            return memo[n];
        }
        if(n==1 || n == 0){
            return 1;
        }
        int total = 0;
        for(int i = 1; i<=n ; i++){
            int l = numTrees(i-1);
            int r = numTrees(n-i);
            total += l*r;
        }
        memo[n] = total;
        return total;
    }
};