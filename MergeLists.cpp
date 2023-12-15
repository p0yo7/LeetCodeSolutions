class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = new ListNode();
        ListNode* aux = result;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                aux->next = new ListNode(list1->val);
                list1 = list1->next;
            } else {
                aux->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            aux = aux->next;
        }

        // Handle remaining elements in list1 or list2
        while (list1 != nullptr) {
            aux->next = new ListNode(list1->val);
            list1 = list1->next;
            aux = aux->next;
        }

        while (list2 != nullptr) {
            aux->next = new ListNode(list2->val);
            list2 = list2->next;
            aux = aux->next;
        }

        return result->next; // Skip the dummy node at the beginning
    }
};
