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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int noofnodes = 0;
        while (temp != NULL) {
            noofnodes++;
            temp = temp->next;
        }
        int n = (noofnodes / 2);
        for (int i = 0; i < n; i++) {
            head = head->next;
        }
        return head;
    }
};