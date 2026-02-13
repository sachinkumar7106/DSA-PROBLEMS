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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* ans=new ListNode(0);
        ListNode* curr=ans;
        while(l1&&l2){
            int temp=l1->val+l2->val+carry;
            curr->next= new ListNode(temp%10);
            carry=temp/10;
            curr=curr->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            int temp=l1->val+carry;
            curr->next=new ListNode(temp%10);
            carry=temp/10;
            curr=curr->next;
            l1=l1->next;
        }
        while(l2){
            int temp=l2->val+carry;
            curr->next=new ListNode(temp%10);
            carry=temp/10;
            curr=curr->next;
            l2=l2->next;
        }
        while(carry){
            curr->next=new ListNode(carry%10);
            carry/=10;
            curr=curr->next;
        }
        return ans->next;
    }
};