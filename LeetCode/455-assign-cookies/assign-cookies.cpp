class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // SUM TOTAL COOKIES
        // SORT CHILDREN BASED ON GREED
        // AWARD THE LEAST GREED FIRST <3

        int sum = 0;

        sort(s.begin(), s.end());
        sort(g.begin(), g.end());

        int i = 0;
        int k = 0;
        while( i < s.size() && k< g.size()){
            if (s[i] >= g[k]) {
                k++;
            }
            i++;
        }
        return k;
    }
};