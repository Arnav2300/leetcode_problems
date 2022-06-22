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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)return head;
        
        ListNode* n=head;
        int length=0;
        while(n){
            length++;
            n=n->next;
        }
        
        ListNode* node=new ListNode(0);
        node->next=head;
        
        ListNode* pre=node;
        ListNode* curr;
        ListNode* nex;
        
        while(length>=k){
            curr=pre->next;
            nex=curr->next;
            for(int i=1;i<k;i++){
                curr->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=curr->next;
            }
            pre=curr;
            length-=k;
        }
        return node->next;
        
    }
};