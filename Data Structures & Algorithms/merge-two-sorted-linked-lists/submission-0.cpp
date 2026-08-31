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

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* head = nullptr;
        ListNode* curr = nullptr;
        
        while (curr1 != nullptr && curr2 != nullptr) {
            // non empty lists
            if (curr1->val >= curr2->val) {
                if (head == nullptr) {
                    curr = curr2;
                    head = curr;
                } else {
                    curr->next = curr2;
                    curr = curr2; 
                }
                curr2 = curr2->next;
            } else {
                if (head == nullptr) {
                    curr = curr1;
                    head = curr;
                } else {
                    curr->next = curr1;
                    curr = curr1;
                }
                curr1 = curr1->next;
            }
        }

        if (curr1 != nullptr) { // merge the list2
                curr->next = curr1;
        }
        if (curr2 != nullptr) { // merge the list1
            curr->next = curr2;
        }

        return head;
    }
};
