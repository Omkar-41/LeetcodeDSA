class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Pointer for valid elements
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // Move valid element forward
                k++; // Increase valid count
            }
        }
        
        return k; // Return count of valid elements
    }
};
