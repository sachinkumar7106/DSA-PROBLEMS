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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        vector<int>vec;
        int arrp=0;
        ListNode*p=head;
        while(p!=NULL){
            if(vec.size()==0){
                vec.push_back(p->val);
            }
            if(vec[arrp]!=p->val){
                vec.push_back(p->val);
                arrp++;
            }
            p=p->next;
        }
        ListNode* newhead=new ListNode(vec[arrp]);
        arrp--;
        while(arrp>=0){
            ListNode* temp=new ListNode(vec[arrp]);
            temp->next=newhead;
            newhead=temp;
            arrp--;
        }
        return newhead;
    }
};