bool bigger(int a, int b){
    return a > b;
}

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), bigger);
        long long max_happiness = 0;
        int i = 0;
        while (k > 0 && i <= happiness.size()-1){
            max_happiness += max(happiness[i]-i, 0);  
            i++; 
            k--;
        }
        return max_happiness;
    }
};