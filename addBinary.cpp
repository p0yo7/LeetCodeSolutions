class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0, i_min;
        string maxStr, minStr, result;

        if (a.size() > b.size()) {
            maxStr = a;
            minStr = b;
        } else {
            maxStr = b;
            minStr = a;
        }

        for (int i = maxStr.size() - 1; i >= 0; i--) {
            i_min = i + minStr.size() - maxStr.size();

            if (i_min >= 0) {
                int sum = (maxStr[i] - '0') + (minStr[i_min] - '0') + carry;
                maxStr[i] = (sum % 2) + '0';
                carry = sum / 2;
            } else {
                int sum = (maxStr[i] - '0') + carry;
                maxStr[i] = (sum % 2) + '0';
                carry = sum / 2;
            }
        }

        if (carry > 0) {
            maxStr = '1' + maxStr;
        }

        return maxStr;
    }
};