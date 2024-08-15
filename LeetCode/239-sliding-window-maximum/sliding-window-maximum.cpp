#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> out;
        deque<int> maxDeque; // To keep maximums

        for (int i = 0; i < nums.size(); i++) {
            // Remove front if it's outside the current window
            if (i >= k && !maxDeque.empty() && maxDeque.front() == nums[i - k]) {
                maxDeque.pop_front();
            }

            // Remove all elements smaller than the current element from the back
            while (!maxDeque.empty() && maxDeque.back() < nums[i]) {
                maxDeque.pop_back();
            }

            // Push current value to the deque
            maxDeque.push_back(nums[i]);

            // Add front of deque to results when the first window of size k is complete
            if (i >= k - 1) {
                out.push_back(maxDeque.front());
            }
        }

        return out;
    }
};
