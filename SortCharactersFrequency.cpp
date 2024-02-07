/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;
struct Letter {
    char letter;
    int frequency;
    Letter(char l, int f){
        letter = l;
        frequency = f;
    }
};

class Solution {
public:
    string frequencySort(string s) {
        vector<Letter> words;
        for (int i = 0; i < s.size(); i++){
            for (int j = 0; j < words.size(); j++){
                if ( j+1 >= words.size()){
                    Letter newLetter(s[i], 1);
                    words.push_back(newLetter);
                }
            }
            cout << s[i] << endl;
        }
        return "";
    }
};

int main()
{
    Solution sol;
    string word = "tree";
    sol.frequencySort(word);

    return 0;
}
