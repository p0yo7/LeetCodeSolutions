class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int max = 0;
        int i = 0;
        int j = nums.size()-1;
        while ( i < j ){
            if (nums[i]+nums[j] == k){
                max++;
                i++;
                j--;
            }
            else if (nums[i]+nums[j] > k){
                j--;
            }
            else {
                i++;
            }
        }
        return max;
    }
};