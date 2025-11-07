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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==0){
            return head;
        }
        if (n == count) {
            ListNode* temp = head->next;
            return temp;
        }
        ListNode* delnode=head;
        for(int i=0;i<count-n-1;i++){
            delnode=delnode->next;
        }
        delnode->next=delnode->next->next;
        return head;
    }
};