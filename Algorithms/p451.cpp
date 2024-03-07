struct Letter {
    char letter;
    int frequency;
    Letter(char l, int f) : letter(l), frequency(f) {}
};

bool compareFrequency(const Letter& a, const Letter& b) {
    return a.frequency > b.frequency;
}

class Solution {
public:
    string frequencySort(string s) {
        vector<Letter> words;
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            bool found = false;
            for (int j = 0; j < words.size(); j++) {
                if (words[j].letter == s[i]) {
                    words[j].frequency++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                Letter newLetter(s[i], 1);
                words.push_back(newLetter);
            }
        }
        sort(words.begin(), words.end(), compareFrequency);
        for (int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words[i].frequency; j++){
                result += words[i].letter;
            }
        }
        return result;
    }
};
