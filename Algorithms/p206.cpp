class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *result = nullptr;
        ListNode *aux = head;
        while (aux != nullptr){
            ListNode *temp = aux->next;
            aux->next = result;
            result = aux;
            aux = temp;
        }
        return result;
    }
};