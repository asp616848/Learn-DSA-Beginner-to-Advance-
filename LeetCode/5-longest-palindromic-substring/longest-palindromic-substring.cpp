#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    void alterString(string &s) {
        int n = s.length();
        string a = "#"; // Start with a # to handle boundaries consistently
        for (int i = 0; i < n; i++) {
            a += s[i];
            a += "#";
        }
        s = a;
        cout << "Transformed string: " << s << endl;
    }

    string longestPalindrome(string s) {
        alterString(s); // Transform the string to include #
        const int n = s.length();
        vector<int> bounds(n, 0); // Array to store the radius of the palindrome at each position

        int center = 0, right = 0; // Center and right boundary of the current palindrome
        int maxLen = 0, maxCenter = 0; // Maximum length and center of the longest palindrome

        for (int i = 0; i < n; i++) {
            // Mirror index of i with respect to the current center
            int mirror = 2 * center - i;

            // Initialize the palindrome radius
            if (i < right)
                bounds[i] = min(right - i, bounds[mirror]);

            // Try to expand the palindrome centered at i
            while (i + bounds[i] + 1 < n && i - bounds[i] - 1 >= 0 && 
                   s[i + bounds[i] + 1] == s[i - bounds[i] - 1]) {
                bounds[i]++;
            }

            // Update the center and right boundary if the palindrome expands beyond the current boundary
            if (i + bounds[i] > right) {
                center = i;
                right = i + bounds[i];
            }

            // Update the maximum length palindrome information
            if (bounds[i] > maxLen) {
                maxLen = bounds[i];
                maxCenter = i;
            }
        }

        // Extract the longest palindrome from the transformed string
        string result = "";
        for (int i = maxCenter - maxLen; i <= maxCenter + maxLen; i++) {
            if (s[i] != '#') result += s[i];
        }

        return result;
    }
};
