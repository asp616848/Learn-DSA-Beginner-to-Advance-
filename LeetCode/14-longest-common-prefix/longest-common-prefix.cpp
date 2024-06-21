#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";  // Return empty if input vector is empty
        if (strs.size() == 1) return strs[0];  // If only one string, return that string

        // Sort the array to bring similar prefixes together
        sort(strs.begin(), strs.end());

        // Compare the first and the last string, since they are the most different after sorting
        string first = strs[0];
        string last = strs.back();
        int i = 0;
        
        // Find the common prefix between the first and the last string
        while (i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }

        // The common prefix
        return first.substr(0, i);
    }
};