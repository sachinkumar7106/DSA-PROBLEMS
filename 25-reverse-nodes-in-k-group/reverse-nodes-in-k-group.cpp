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
    ListNode* getknode(ListNode *curr, int k ){
        while(curr&&k>0){
            curr=curr->next;
            k--;
        }
        return curr;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;

        ListNode* prev=dummy;
        while(true){
            ListNode* lastele=getknode(prev,k);
            if(NULL==lastele){
                break;
            }
            ListNode* next=lastele->next;

            ListNode* p=next;
            ListNode* curr=prev->next;
            for(int i=0;i<k;i++){
                ListNode* temp=curr->next;
                curr->next=p;
                p=curr;
                curr=temp;
            }
            ListNode*temp=prev->next;
            prev->next=lastele;
            prev=temp;
        }
        return dummy->next;
    }
};