class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;
        
        while (start < end) {
            while (start < end && !isalnum(s[start])) start++;  // Skip non-alphanumeric
            while (start < end && !isalnum(s[end])) end--;      // Skip non-alphanumeric
            
            if (tolower(s[start]) != tolower(s[end])) 
                return false;  // If mismatch, it's not a palindrome
            
            start++;
            end--;
        }
        
        return true;  // If all matched, it's a palindrome
    }
};
