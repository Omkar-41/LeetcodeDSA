class Solution {
public:
    bool isPalindrome(int x) {
        // If x is negative or ends in 0, it is not a palindrome
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }

        int reversed = 0;
        // Reverse the second half of the number
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        // Check if the first half equals the reversed second half
        // (x == reversed / 10) checks for odd numbers of digits.
        return (x == reversed) || (x == reversed / 10);
    }
};