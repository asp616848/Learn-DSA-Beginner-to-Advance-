class Solution {
public:
    int reverse(int x) {
        long long reversed = 0; // Use long long to handle potential overflow
        int sign = (x < 0) ? -1 : 1; // Check the sign of x
        
        // Handle edge case for INT_MIN, as negating INT_MIN causes overflow
        if (x == INT_MIN) return 0;
        
        x = abs(x); // Work with absolute value of x
        
        while (x != 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
            
            // Check for overflow
            if (reversed > INT_MAX || reversed < INT_MIN) {
                return 0;
            }
        }
        
        return sign * reversed; // Return the reversed number with the correct sign
    }
};
