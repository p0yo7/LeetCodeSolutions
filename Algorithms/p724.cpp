class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = 0;
        for (int i = 0; i < nums.size(); i++){
            for (int j = 0; j < i; j++){
                left += nums[j];
            }
            for (int j = nums.size()-1; j > i; j--){
                right += nums[j];
            }
            if (left == right) return i;
            left = 0;
            right = 0;
        }
        return -1;
    }
};

// Optimized
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int left = 0;
        for (int i = 0; i < nums.size(); i++){
            int right = total - left - nums[i];
            if (left == right ) return i;
            left += nums[i];
        }   
        return -1;
    }
};