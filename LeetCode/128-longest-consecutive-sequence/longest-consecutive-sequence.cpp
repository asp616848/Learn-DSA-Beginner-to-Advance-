class Solution {
public:
    int getLeftLength(int a, unordered_map<int, bool>& hm) {
        if (!hm[a]) {
            return 0;
        }
        hm[a] = false;
        return 1 + getLeftLength(a - 1, hm);
    }

    int getRightLength(int a, unordered_map<int, bool>& hm) {
        if (!hm[a]) {
            return 0;
        }
        hm[a] = false;
        return 1 + getRightLength(a + 1, hm);
    }

    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> hm;
        int maxi = 0;
        for (int num : nums) {
            hm[num] = true;
        }
        
        for (int num : nums) {
            if (hm[num]) {
                int leftLen = getLeftLength(num - 1, hm);
                int rightLen = getRightLength(num + 1, hm);
                int totalLen = leftLen + 1 + rightLen; // Including current num
                maxi = max(totalLen, maxi);
            }
        }
        return maxi;
    }
};
