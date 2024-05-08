class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        for(auto i : nums1){
            merged.push_back(i);
        }
        for(auto i : nums2){
            merged.push_back(i);
        }
        sort(merged.begin(), merged.end());
        int size = merged.size();
        return size&1? merged[size/2]: (merged[size/2 -1] + merged[size/2]) / 2.0;
    }
};