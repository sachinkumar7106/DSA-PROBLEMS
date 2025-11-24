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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1=list1;
        ListNode* head2=list2;
        ListNode* reshead=new ListNode(0),*tail=reshead;
        while(head1&&head2){
            if(head1->val<=head2->val){
                tail->next=head1;
                tail=tail->next;
                head1=head1->next;
            }else{
                tail->next=head2;
                tail=tail->next;
                head2=head2->next;
            }
        }
        if(head1){
            tail->next=head1;
        }
        if(head2){
            tail->next=head2;
        }
        return reshead->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return {};
        }
        if(lists.size()==1){
            return lists[0];
        }
        ListNode* res=lists[0];
        for(int i=1;i<lists.size();i++){
            res=mergeTwoLists(res,lists[i]);
        }
        return res;
    }
};