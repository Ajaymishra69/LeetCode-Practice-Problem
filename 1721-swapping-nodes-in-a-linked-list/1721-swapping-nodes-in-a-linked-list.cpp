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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* t = head;
        ListNode* x = head;
        int te = k;
        while(te>1){
            t=t->next;
            te--;
        }
        ListNode* z = t;
        while(z->next!=NULL){
            x=x->next;
            z=z->next;
        }
        int temp = x->val;
        x->val = t->val;
        t->val = temp;
        return head;
        
    }
};