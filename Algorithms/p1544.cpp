class Solution {
public:
    string makeGood(string s) {
        int i = 0, size = s.size();
        bool lower_upper = false, upper_lower = false, same_letter = false;
        while ( i < size){
            same_letter = (tolower(s[i]) == tolower(s[i+1]));
            lower_upper = (islower(s[i]) && isupper(s[i+1]));
            upper_lower = (isupper(s[i]) && islower(s[i+1]));
            if ((lower_upper || upper_lower) && same_letter){
                s.erase( i,2 );
                i = 0;
                size = s.size();
                continue;
            }
            i++;
        }
        return s;
    }
};