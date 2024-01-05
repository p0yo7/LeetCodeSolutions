/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size()-1; i >= 0; i--){
            if (digits[i]+1 == 10){
                if (digits[0]+1 == 10){
                    digits[0] = 1;
                    digits.push_back(0);
                }
                digits[i] = 0;
            }
            else {
                cout << "xd" << endl;
                digits[i] = digits[i] + 1;
                break;
            }
        }
        return digits;
    }
};
int main()
{
    Solution sol;
    vector<int> myVector = {9,9,9};
    sol.plusOne(myVector);
    for (int i= 0; i < myVector.size(); i++){
        cout << myVector[i] << endl;
    }
    return 0;
}
