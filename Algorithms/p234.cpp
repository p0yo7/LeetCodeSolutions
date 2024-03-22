class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string t1 = "", t2 = "";
        while (head != nullptr){
            t1 += to_string(head->val);
            head = head->next;
        }
        int half = t1.length() / 2;
        t2 = !(t1.length() & 1) ? t1.substr(half) : t1.substr(half+1);
        t1.erase(half);
        reverse(t1.begin(), t1.end());
        return t1 == t2;
    }
};