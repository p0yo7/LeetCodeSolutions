class Solution {
public:
    int maxDepth(string s) {
        int max_size = 0;
        stack<char> nests;
        for (char i : s){
            if (i == '('){
                nests.push(i);
            }
            else if (i == ')'){
                if ( nests.empty()){
                    return false;
                }
                if ( nests.size() > max_size) max_size = nests.size();
                nests.pop();
            }
        }
        return max_size;
    }
};