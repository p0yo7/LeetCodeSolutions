class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i = 0, size = nums.size(), result = 0, sum = 0;
        unordered_map<int, int> map;
        map[0] = 1;
        for (; i < size; i++){
            sum += nums[i];
            result += map[sum-goal];
            map[sum]++;
        }
        return result;
    }
};