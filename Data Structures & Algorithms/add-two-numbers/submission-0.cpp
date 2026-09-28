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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head{nullptr};
        ListNode* curr{nullptr};
        int car{0};
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;
        while (l1 != nullptr || l2 != nullptr) {
            int s = car;
            if (l1 != nullptr) s += l1->val;
            if (l2 != nullptr) s += l2->val;
            if (s > 9) {
                s = s % 10;
                car = 1;;
            } else {
                car = 0;
            }
            ListNode* a = new ListNode(s);

            if (curr == nullptr) {
              curr = a;  
            } else {
                curr->next = a;
                curr = curr->next;
            }
            if (head == nullptr) head = curr;
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        if (car == 1) { // after loop ends
            ListNode* a = new ListNode(1);
            curr->next = a;
        }
        return head;
    }

    
};
