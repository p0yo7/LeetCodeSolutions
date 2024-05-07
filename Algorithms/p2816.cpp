class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        vector<int> nums;
        while (head != nullptr){
            nums.push_back(head->val);
            head = head->next;
        }
        
        int carry = 0;
        for (int i = nums.size() - 1; i >= 0; --i){
            int doubledValue = 2 * nums[i] + carry;
            nums[i] = doubledValue % 10; 
            carry = doubledValue / 10;      
        }

        if (carry > 0) {
            nums.insert(nums.begin(), carry);
        }
        
        ListNode* node = new ListNode(-1);
        ListNode* current = node;
        for (int i = 0; i < nums.size(); ++i){
            current->next = new ListNode(nums[i]);
            current = current->next;
        }
        
        ListNode* result = node->next;
        delete node;
        return result;
    }
};

