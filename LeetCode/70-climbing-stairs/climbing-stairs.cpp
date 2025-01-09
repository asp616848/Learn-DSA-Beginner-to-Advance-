class Solution {
public:
    int climbStairs(int n) {
        if (n == 0) return 0; // Handle edge case for 0 steps
        vector<int> sol(n + 1);
        // initializing for n = 1 and n = 2
        sol[0] = 1;
        sol[1] = 2;

        for (int i = 2; i < n; i++) {
            sol[i] = sol[i - 1] + sol[i - 2];  // Calculate ways to reach the i-th step
        }
        return sol[n-1];
    }
};