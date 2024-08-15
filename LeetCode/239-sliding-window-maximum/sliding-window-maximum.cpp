#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> out;
        deque<int> maxDeque; // To keep maximums

        for (int i = 0; i < nums.size(); i++) {
            
            if (i - maxDeque.front() == k  && !maxDeque.empty()) {
                maxDeque.pop_front();
            }


            while (!maxDeque.empty() && nums[maxDeque.back()] < nums[i]) {
                maxDeque.pop_back();
            }

            maxDeque.push_back(i);

            if (i >= k - 1) {
                out.push_back(nums[maxDeque.front()]);
            }
        }

        return out;
    }
};
