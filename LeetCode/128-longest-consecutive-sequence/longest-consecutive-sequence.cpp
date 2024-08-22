
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLength = 0;

        for (int num : numSet) {
            // Check if 'num' is the start of a sequence
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentLength = 1;

                // Count the length of the sequence
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum += 1;
                    currentLength += 1;
                }

                // Update the maximum length found
                maxLength = max(maxLength, currentLength);
            }
        }

        return maxLength;
    }
};
