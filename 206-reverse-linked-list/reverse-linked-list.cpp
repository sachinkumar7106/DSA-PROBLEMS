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
    ListNode* reverseLL(ListNode* curr,ListNode* prev){
        if(curr==NULL){
            return prev;
        }
        ListNode* Next=curr->next;
        curr->next=prev;
        return reverseLL(Next,curr);
    }
    ListNode* reverseList(ListNode* head) {
        return reverseLL(head,NULL);
    }
};