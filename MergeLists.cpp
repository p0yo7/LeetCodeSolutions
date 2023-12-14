    

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *result = new ListNode();
        ListNode *temp = result;
        while (list1->next != nullptr || list2->next != nullptr){
            if (list1->next == nullptr && list2->next != nullptr){
                cout << list2->val << endl;
                temp = new ListNode(list2->val);
                temp = temp->next;
                list2 = list2->next;
            }
            else if (list2->next == nullptr && list1->next != nullptr){
                cout << list1->val << endl;
                temp = new ListNode(list1->val);
                temp = temp->next;
                list1 = list1->next;
            }
            if (list1->val < list2->val){
                cout << list1->val << endl;
                cout << list2->val << endl;
                temp = new ListNode(list1->val);
                temp = temp->next;
                temp = new ListNode(list2->val);
                temp = temp->next;
                list1 = list1->next;
                list2 = list2->next;
            }
            else {
                cout << list2->val << endl;
                cout << list1->val << endl;
                temp = new ListNode(list2->val);
                temp = temp->next;
                temp = new ListNode(list1->val);
                temp = temp->next;
                list1 = list1->next;
                list2 = list2->next;
            }
        }
        // printList(result);
        return result;
    }
};

int main()
{
    Solution sol;
    ListNode* list1 = new ListNode(1);
    ListNode* temp = list1;
    for (int i = 2; i <= 5; ++i) {
        temp->next = new ListNode(i);
        temp = temp->next;
    }

    // Creating a random list 2
    ListNode* list2 = new ListNode(6);
    temp = list2;
    for (int i = 7; i <= 10; ++i) {
        temp->next = new ListNode(i);
        temp = temp->next;
    }
    ListNode *result = sol.mergeTwoLists(list1,list2);
    printList(result);
    return 0;
}
