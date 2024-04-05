//Not proud of this solution at all but it works
int getLeaf(int n,const vector<vector<int>> adjList) {
    unordered_map<int, int> incoming;
    unordered_map<int, int> outgoing;
    unordered_set<int> set;
    int judge = -1;
    for (const auto &edge : adjList){
        incoming[edge[1]]++;
        outgoing[edge[0]]++;
        set.insert(edge[0]);
        set.insert(edge[1]);
    }
    if (n == 1 && set.size() == 0) return 1;
    for (const auto &pair: incoming){
        if (pair.second == set.size()-1 && outgoing[pair.first] == 0){
            if (judge == -1){
                judge = pair.first;
            }
        }
    }
    return judge;
}

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        return getLeaf(n,trust);
    }
};