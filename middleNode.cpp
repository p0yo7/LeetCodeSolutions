/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/* 
##### *****    SOL ***** #####
It needs to return the second half of the list
You need to determine the size of the list
Once you go through it there is no way to go back in the list given the struct
So you create a temporary list to determine the size
Then you iterate through the main list until it reaches the second half
*/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int i = 0, half;
        ListNode *temp = head;
        while (temp != nullptr){
            i++;
            temp = temp->next;
        }
        half = (i/2);
        i = 0;
        while (i < half){
            head = head->next;
            i++;
        }
        return head;
    }
};
