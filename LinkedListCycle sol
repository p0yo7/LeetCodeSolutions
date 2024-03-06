class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, bool> dict;
        string location = "";
        while (head != nullptr){
            if (dict[head]) return true;
            dict[head] = true;
            head = head->next;
        }
        return false;  
    }
};
