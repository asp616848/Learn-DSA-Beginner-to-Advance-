class Solution {
public:
    int longestPalindrome(string s) {
        int arr[128] = {0};  // Since we're considering case-sensitive characters, we use a larger array size to handle all ASCII characters
        
        // Count the frequency of each character
        for (char c : s) {
            arr[c]++;
        }

        int len = 0;
        bool oddFound = false;
        
        // Add the maximum even length to the palindrome length
        for (int i = 0; i < 128; ++i) {  // Iterate over all ASCII characters (both lower and upper case)
            len += (arr[i] / 2) * 2;  // Add even part of the count
            if (arr[i] % 2 != 0) {
                oddFound = true;  // If there's any odd count, we can place one character in the middle
            }
        }

        // If there is any odd character, we can add one for the center
        if (oddFound) {
            len++;
        }

        return len;
    }
};
