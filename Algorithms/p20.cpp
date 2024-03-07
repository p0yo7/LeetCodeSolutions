class Solution {
public:
    bool isValid(string s) {
        stack<char> parenthesesStack;
        unordered_map<char, char> closingToOpening {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            if (closingToOpening.find(c) != closingToOpening.end()) {
                if (parenthesesStack.empty() || parenthesesStack.top() != closingToOpening[c]) {
                    return false;  
                }

                parenthesesStack.pop();
            } else {
                parenthesesStack.push(c);
            }
        }

        return parenthesesStack.empty();
    }
};