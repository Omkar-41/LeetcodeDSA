class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int j = 0, n = a.size();
        
        // Move all non-zero elements to the left
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                swap(a[i], a[j]);
                j++;
            }
        }
    }
};
