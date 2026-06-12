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
    ListNode* reverseLL(ListNode* head){
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* next=reverseLL(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return next;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return true;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next&&fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead=reverseLL(slow->next);
        ListNode* ptr1=head;
        ListNode* ptr2=newhead;

        while(ptr2){
            if(ptr1->val!=ptr2->val){
                reverseLL(newhead);
                return false;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;

        }
        reverseLL(newhead);
        return true;
    }
};