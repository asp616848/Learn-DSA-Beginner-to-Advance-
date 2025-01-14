class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int currentSum = 0;
        int windowLen = INT_MAX;

        int left = 0;
        int right = 0;

        while(right < nums.size()){

            currentSum += nums[right];
            right++;

            while(currentSum >= target){

                int currentWindowSize = right - left;

                windowLen = min(windowLen, currentWindowSize);
                
                currentSum -= nums[left];

                left++;
            }
        }

        return windowLen == INT_MAX ? 0 : windowLen;
    }
};