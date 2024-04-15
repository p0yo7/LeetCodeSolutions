class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int size = edges.size();
        unordered_map<int,int> star;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < edges[i].size(); j++){
                star[edges[i][j]]++;
            }
        }
        vector<pair<int, int>> pairs_vector(star.begin(), star.end());
        sort(pairs_vector.begin(), pairs_vector.end(), higher);
        for (auto i : pairs_vector){
            cout << i.first << " " << i.second << endl;
        }
        return pairs_vector[0].first;
    }
    static bool higher(const pair<int, int> &a, const pair<int,int> &b){
        return a.second > b.second;
    }
};