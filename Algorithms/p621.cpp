class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> map;
        for( char i : tasks){
            map[i]++;
        }
        int maxtask = 0;
        for (auto &i: map){
            maxtask = max(i.second, maxtask);
        }
        int intervals = (maxtask - 1) * (n + 1);
        for (auto& entry : map) {
            if (entry.second == maxtask) {
                intervals++;
            }
        }
        return max(intervals, static_cast<int>(tasks.size()));
    }
};