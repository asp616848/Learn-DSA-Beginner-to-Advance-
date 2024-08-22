class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> hm;
        int maxi = 0;

        // Populate the map with all numbers
        for (int num : nums) {
            hm[num] = true;
        }
        
        // Iterate through each number and process only if it's the start of a sequence
        for (int num : nums) {
            if (!hm[num - 1]) {  // Only start if `num` is the start of a sequence
                int currentNum = num;
                int length = 1;

                // Check the consecutive sequence length
                while (hm[currentNum + 1]) {
                    currentNum++;
                    length++;
                }

                // Update the maximum length found
                maxi = max(maxi, length);
            }
        }

        return maxi;
    }
};
