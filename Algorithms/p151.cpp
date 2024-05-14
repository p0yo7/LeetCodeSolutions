class Solution {
public:
    std::string reverseWords(std::string s) {
        string result = "";
        string word = "";

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    result = word + " " + result;
                    word = "";
                }
            }
        }

        if (!word.empty()) {
            result = word + " " + result;
        }

        if (!result.empty()) {
            result.pop_back();
        }

        return result;
    }
};
