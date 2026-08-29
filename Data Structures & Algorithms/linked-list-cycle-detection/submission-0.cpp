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
    bool hasCycle(ListNode* head) {
        if (head == nullptr) return false;
        ListNode* curr = head;
        while(curr != nullptr) {
            if (s.contains(curr)) {
                return true;
            } else {
                s.insert(curr);
                curr = curr->next;
            }
        }
        return false;
    }

    unordered_set<ListNode*> s;
};
