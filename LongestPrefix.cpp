class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int shortest_word = strs[0].size();
        for(int i = 0; i < strs.size(); i++){
            if (strs[i].size() < shortest_word) shortest_word = strs[i].size();
        }
        for (int i = 0; i < shortest_word; i++){
            for (int j = 0; j < strs.size()-1; j++){
                if (strs[j][i] != strs[j+1][i]) {
                    return result;
                }
            }
            result += strs[0][i];
        }
        return result;
    }
};