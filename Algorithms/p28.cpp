class Solution {
public:
    int strStr(string haystack, string needle) {
        string compare;
        if (haystack.size() < needle.size()) return -1;
        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            compare = haystack.substr(i, needle.size());
            if (compare == needle) return i;
        }
        return -1;
    }
};