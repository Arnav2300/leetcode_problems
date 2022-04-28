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
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int carry=0;
        ListNode *dum=new ListNode();
        ListNode *temp=dum;
        while((l1!=NULL || l2!=NULL)|| carry){
            int s=0;
            if(l1!=NULL){
                s+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                s+=l2->val;
                l2=l2->next;
            }
            //cout<<s;
            s+=carry;
            carry=s/10;
            ListNode *node=new ListNode(s%10);
            temp->next=node;
            temp=temp->next;
            
        }
        return dum->next;
    }
};