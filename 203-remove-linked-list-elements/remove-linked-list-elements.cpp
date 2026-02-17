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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL&&head->val==val){
            head=head->next;
        }
        if(head==NULL||(head->next==NULL)&&(head->val==val)){
            return NULL;
        }
        ListNode*p1=head;
        ListNode*p2=head->next;
        while(p2!=NULL){
            if(p2->val==val){
                p2=p2->next;
            }else{
                p1->next=p2;
                p1=p2;
                p2=p2->next;
            }
        }
        p1->next=p2;
        return head;
    }
};