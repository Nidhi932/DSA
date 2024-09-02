class Solution {
public:
    
    int reverse(int x) {
        long number = 0; // Use long to handle overflow during the calculation

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Check if the number will overflow after the next digit is added
            if (number > (INT_MAX / 10) || (number == INT_MAX / 10 && digit > 7)) {
                return 0; // Will overflow if we add the next digit
            }
            if (number < (INT_MIN / 10) || (number == INT_MIN / 10 && digit < -8)) {
                return 0; // Will underflow if we add the next digit
            }

            number = number * 10 + digit;
        }

        return static_cast<int>(number); // Convert back to int as it is now safe
    }
    
};