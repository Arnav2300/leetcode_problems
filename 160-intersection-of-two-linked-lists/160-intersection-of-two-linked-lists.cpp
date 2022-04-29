/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        unordered_set<ListNode*>s;
        //ListNode *la=headA,*lb=headB;
        while(headA){
            s.insert(headA);
            headA=headA->next;
        }
        while(headB){
            if(s.find(headB)!=s.end())
                return headB;        
            headB=headB->next;
        
        }
        return NULL;
    }
};