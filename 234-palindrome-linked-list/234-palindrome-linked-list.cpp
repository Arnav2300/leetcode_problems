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
    ListNode* rev(ListNode* node){
        ListNode *nex=NULL,*pre=NULL;
        while(node){
            nex=node->next;
            node->next=pre;
            pre=node;
            node=nex;
        }
        return pre;
        
    }
    bool isPalindrome(ListNode* head) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        ListNode *fast=head,*slow=head;
        while(fast->next&&fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=rev(slow->next);
        slow=slow->next;
        ListNode *d=head;
        while(slow){
            if(slow->val!=d->val)return false;
            slow=slow->next;
            d=d->next;
        }
        return true;
    }
};