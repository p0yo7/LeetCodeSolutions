class Solution {
public:
    string removeStars(string s) {
        string res;
        int skip = 0;

        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] == '*') {
                skip++;
            } else {
                if (skip > 0) {
                    skip--;
                } else {
                    res += s[i];
                }
            }
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};