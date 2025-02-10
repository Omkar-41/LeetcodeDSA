class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0; // Correct base case
        if (n == 1) return 1; // Correct base case
        
        return fib(n - 1) + fib(n - 2); // Recursive formula
    }
};
