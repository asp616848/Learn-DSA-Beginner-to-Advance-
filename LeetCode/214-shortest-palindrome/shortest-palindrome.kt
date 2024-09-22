class Solution {
    // Helper function to check if a string is a palindrome
    fun isPalind(s: String, endV: Int): Boolean {
        var start = 0
        var end = endV
        while (start < end) {
            if (s[start] != s[end]) {
                return false
            }
            start++
            end--
        }
        return true
    }

    // Main function to find the shortest palindrome
    fun shortestPalindrome(s: String): String {
        val len = s.length
        var lastPalindIdx = 0

        if(len == 0){
            return s
        }
        
        // Iterate over the string to find the longest palindromic prefix
        for (i in len - 1 downTo 0) {
            if (isPalind(s, i)) {
                lastPalindIdx = i
                break
            }
        }
        
        // If the whole string is already a palindrome, return the string as is
        if (lastPalindIdx == len - 1) {
            return s
        }

        // Get the non-palindromic suffix
        val suffix = s.substring(lastPalindIdx + 1)
        
        // Reverse the suffix and append it in front of the string
        return suffix.reversed() + s
    }
}
