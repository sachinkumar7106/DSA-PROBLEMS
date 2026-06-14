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
    int pairSum(ListNode* head) {
        int result=0;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next&&fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newlist=slow->next;
        ListNode*prev=NULL;
        ListNode*next;
        slow->next=NULL;
        slow=head;
        while(newlist){
            next=newlist->next;
            newlist->next=prev;
            prev=newlist;
            newlist=next;
        }
        while(slow){
            result=max(slow->val+prev->val,result);
            slow=slow->next;
            prev=prev->next;
        }
        return result;
    }
};