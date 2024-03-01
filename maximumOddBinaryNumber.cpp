class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string result = s;
        int i = 0, j = s.size();
        int ones = 0, zeros = 0;
        vector<char> digits(s.begin(), s.end());
        for (int i = 0; i < digits.size(); i++){
            if (digits[i] == '0') {
                zeros++;
            }
            else if (digits[i] == '1') {ones++;}
            else {
                return "0";
            }
        }
        if (ones == 0) return "0";
        while (i < digits.size()){
            if (ones > 1 && zeros > 0){
                result[i] = '1';
                ones--;
            }
            else if (ones == 1 && zeros > 0){
                result[i] = '0';
                zeros--;
            }
            else if (ones == 1 && zeros == 0) {
                result[i] = '1';
                ones --;
            }
            i++;
        }
        return result;
    }
};
