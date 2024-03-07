class Solution {
    public:
        int climbStairs(int n){
            vector<int> fibonacci = {1,2};
            for(int i = 2; i < n; i++){
                fibonacci.push_back(fibonacci[i-2]+fibonacci[i-1]);
            }
            return fibonacci[n-1];
        }
};
