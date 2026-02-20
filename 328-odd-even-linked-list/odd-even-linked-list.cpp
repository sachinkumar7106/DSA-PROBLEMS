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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode*p1=head,*p2=head->next;
        ListNode*curr1=p1,*curr2=p2;
        while(curr2!=NULL&&curr2->next!=NULL){
            curr1->next=curr2->next;
            curr1=curr1->next;
            curr2->next=curr1->next;
            curr2=curr2->next;
        }
        curr1->next=p2;
        return head;
    }
};