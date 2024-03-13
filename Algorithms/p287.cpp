// Using unordered set min 129 ms
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for (int i = 0; i < nums.size(); i++){
            if (set.find(nums[i]) != set.end()) return nums[i];
            set.insert(nums[i]);
        }
        return -1;
    }
};
// Using unordered map min 126 ms
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for (int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
            if(map[nums[i]] > 1) return nums[i];
        }
        return -1;
    }
};