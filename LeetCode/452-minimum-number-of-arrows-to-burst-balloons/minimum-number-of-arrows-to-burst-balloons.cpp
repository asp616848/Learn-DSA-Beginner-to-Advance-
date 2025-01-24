class Solution {
public:
    static bool comp(vector<int> pointa, vector<int> pointb){
        return pointa[1] < pointb[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) return 0;
        sort(points.begin(), points.end(), comp);

        int arrows = 1;
        int ind = points[0][1];
        for(int i = 1; i < points.size(); i++){
            if(points[i][0] > ind){
                arrows++;
                ind = points[i][1];
            }
        }
        return arrows;
    }
};