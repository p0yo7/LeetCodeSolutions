bool isVowel(char letter){
    return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');
}
class Solution {
public:
    string reverseVowels(string s) {
        int head = 0;
        int tail = s.size()-1;
        while ( head < tail){
            if (isVowel(s[head]) && isVowel(s[tail])) {
                char aux = s[head];
                s[head] = s[tail];
                s[tail] = aux;
                head++;
                tail--;
            }
            else if (isVowel(s[head])) {
                tail--;
            }
            else {
                head++;
            }
        }
        return s;
    }
};