class Solution {
public:
    void sortColors(vector<int>& nums) {
         int o = 0, t = 0, z = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) z++;
            else if(nums[i] == 1) o++;
            else if(nums[i] == 2) t++;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(i < z) nums[i] = 0;
            else if(i < z + o) nums[i] = 1;
            else if(i < z + o + t) nums[i] = 2;
    }
    }
};