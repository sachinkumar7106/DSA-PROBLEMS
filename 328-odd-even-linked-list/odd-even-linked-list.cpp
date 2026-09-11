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
        ListNode* ptr1=head,*ptr2 =head->next;
        ListNode* curr1=ptr1,*curr2=ptr2;
        while(curr2!=NULL&&curr2->next!=NULL){
            curr1->next=curr2->next;
            curr1=curr1->next;
            curr2->next=curr1->next;
            curr2=curr2->next;
        }
        curr1->next=ptr2;
        return ptr1;
    }
};