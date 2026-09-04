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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }

        if(head1->val>head2->val)swap(head1,head2);

        ListNode* temp=head1;
        while(head2!=NULL && temp!=NULL){
            while(temp->next!=NULL && (temp->next->val)<= (head2->val)){
                // cout<<temp->val<<' '<<head2->val<<endl;
                temp=temp->next;
            }
            

            // if(temp==NULL){
            //     cout<<"ekhane"<<endl;
            //     ListNode* tail=head1;
            //     while(tail->next!=NULL)tail=tail->next;
            //     tail->next=head2;
            //     return head1;
            // }
            
            if(head2!=NULL&&temp->val<=head2->val){
                ListNode* temp2=head2;
                head2= temp2->next;
                ListNode* nxt=temp->next;
                temp->next=temp2;
                temp2->next=nxt;
                temp = temp->next;
            }
        }
        return head1;
    }
};
