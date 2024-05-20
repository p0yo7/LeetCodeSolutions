class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if (nums.size() < k) return -1;

        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double maxAvg = sum / k;
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k]; 
            double currentAvg = sum / k;
            if (currentAvg > maxAvg) {
                maxAvg = currentAvg;
            }
        }

        return maxAvg;
    }
};
