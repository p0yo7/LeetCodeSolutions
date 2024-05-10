class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        unordered_map<double, pair<int, int>> fractions; 
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                double frac = (double) arr[i] / arr[j];
                fractions[frac] = {arr[i], arr[j]}; 
            }
        }
        
        vector<pair<int, int>> sortedFractions;
        for (auto& fraction : fractions) {
            sortedFractions.push_back({fraction.second.first, fraction.second.second});
        }
        sort(sortedFractions.begin(), sortedFractions.end(), [](const auto& a, const auto& b) {
            return (double) a.first / a.second < (double) b.first / b.second;
        });
        
        return {sortedFractions[k - 1].first, sortedFractions[k - 1].second};
    }
};
