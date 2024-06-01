#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int mx = *max_element(bloomDay.begin(), bloomDay.end());
        int mn = *min_element(bloomDay.begin(), bloomDay.end());
        int res = -1;
        while (mn <= mx) { // Change to <=
            int mid = mn + (mx - mn) / 2;
            if (check(mid, bloomDay, m, k)) {
                res = mid;
                mx = mid - 1;
            } else {
                mn = mid + 1;
            }
        }
        return res;
    }

    bool check(int mid, vector<int>& bloomDay, int m, int k) {
        int cnt = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                cnt++;
                if (cnt >= k) {
                    cnt -= k;
                    m--;
                }
            } else {
                cnt = 0;
            }
            if (m <= 0) return true;
        }
        return false;
    }
};

int main(){
    Solution s;
    vector<int> bloomDay = {1,10,3,10,2};
    int m = 1;
    int k = 3; // number of adjacent flowers required to make a bouquet
    cout<<s.minDays(bloomDay, m, k);
    return 0;
}