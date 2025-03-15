class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;
        bool skipped = false;
        while(l < r){
            while(l < r && s[l] == s[r]){
                l++;
                r--;
            }
            if(l >= r){
                return true;
            }
            if(skipped){
                return false;
            } else {
                // Instead of making a single greedy skip, check both possibilities:
                int i = l + 1, j = r;
                bool skipLeft = true;
                while(i < j){
                    if(s[i] != s[j]){
                        skipLeft = false;
                        break;
                    }
                    i++;
                    j--;
                }
                i = l, j = r - 1;
                bool skipRight = true;
                while(i < j){
                    if(s[i] != s[j]){
                        skipRight = false;
                        break;
                    }
                    i++;
                    j--;
                }
                return skipLeft || skipRight;
            }
        }
        return true;
    }
};
