class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are never palindrome
        // Numbers ending with 0 are not palindrome (except 0)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversed = 0; // Stores the reversed half

        // Reverse digits until reversed becomes >= remaining x
        while (x > reversed) {
            // Extract last digit and add it to reversed
            reversed = reversed * 10 + (x % 10);

            // Remove last digit from original number
            x = x / 10;
        }

        // Even digits: x == reversed
        // Odd digits: remove middle digit using reversed / 10
        return (x == reversed || x == reversed / 10);
    }
};