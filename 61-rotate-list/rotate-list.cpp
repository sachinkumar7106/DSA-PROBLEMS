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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next||k==0){
            return head;
        }
        int count =0;
        ListNode*curr=head;
        while(curr){
            count++;
            curr=curr->next;
        }
        k=k%count;

        for(int i=0;i<k;i++){
            curr=head;
            ListNode* prev=NULL;
            while(curr->next){
                prev=curr;
                curr=curr->next;
            }
            prev->next=NULL;
            curr->next=head;
            head=curr;
        }
        return head;
    }
};