class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int lastDay = days.back();
        unordered_set<int> travelDays(days.begin(), days.end());
        vector<int> dp(lastDay + 1, 0);

        for (int day = 1; day <= lastDay; day++) {
            if (travelDays.count(day) == 0) {
                // If no travel, cost is same as previous day
                dp[day] = dp[day - 1];
            } else {
                // Calculate the cost for 1-day, 7-day, and 30-day tickets
                int cost1 = dp[max(0, day - 1)] + costs[0]; // 1-day ticket
                int cost7 = dp[max(0, day - 7)] + costs[1]; // 7-day ticket
                int cost30 = dp[max(0, day - 30)] + costs[2]; // 30-day ticket

                dp[day] = min({cost1, cost7, cost30});
            }
        }
        return dp[lastDay];
    }
};
