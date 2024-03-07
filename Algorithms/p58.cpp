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