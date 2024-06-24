class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> res(2);
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        for (const int &num : set1) {
            if (set2.find(num) == set2.end()) {
                res[0].push_back(num);
            }
        }

        for (const int &num : set2) {
            if (set1.find(num) == set1.end()) {
                res[1].push_back(num);
            }
        }

        return res;
    }
};