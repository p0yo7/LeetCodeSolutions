class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        for (auto i : arr){
            map[i]++;
        }
        unordered_set<int> occurrences;
        for (pair i : map){
            if (occurrences.find(i.second) == occurrences.end()){
                occurrences.insert(i.second);
            }
            else { return false;}
        }
        return true;
    }
};