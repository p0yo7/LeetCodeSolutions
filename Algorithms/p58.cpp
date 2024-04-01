class Solution {
public:
    int lengthOfLastWord(string s) {
        string result = s;
        for (int i = s.length()-1; i >= 0; i--){
            if (s[i] == ' ') {
                result = s.substr(i + 1, s.length() - i - 1);
                if (result.size() == 0) s = s.substr(0,i);
                else break;
            }
        }
        if (s.length() > 0 && result.size() == 0 && s[0] != ' '){
            for(int i =0; i < s.length(); i++){
                if (s[i] == ' ') break;
                result += s[i];
            }
        }
        return result.length();
    }
};

class Solution {
public:
    int lengthOfLastWord(string s) {
        int size_string = s.size();
        int i = size_string-1;
        int word_size = 0;
        for (; i >= 0; i--){
            if (s[i] == ' '){
                if (word_size == 0) {
                    continue;
                }
                else if (word_size > 0) {
                    break;
                }
            }
            else {
                word_size++;
            }
        }
        return word_size;
    }
};