class Solution {
public:
    static bool comp(const pair<int, int>& pointa, const pair<int, int>& pointb) {
        return pointa.second < pointb.second;  // Compare the second element (right endpoint)
    }
    
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) return 0;

        // Convert the points into a vector of pairs
        vector<pair<int, int>> intervals;
        for (const auto& p : points) {
            intervals.push_back({p[0], p[1]});
        }

        // Sort intervals based on the second value (right endpoint)
        sort(intervals.begin(), intervals.end(), comp);

        int arrows = 1;
        int ind = intervals[0].second;  // The first arrow is shot at the end of the first interval
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i].first > ind) {  // No overlap, shoot a new arrow
                arrows++;
                ind = intervals[i].second;  // Move the arrow to the new endpoint
            }
        }
        return arrows;
    }
};
