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
        int size=0;
        int te = k;
        while(t!=NULL){
            t=t->next;
            size++;
        }
        t=head;
        while(te>1){
            t=t->next;
            te--;
        }
        int c = size-k;
        while(c--){
            x=x->next;
        }
        swap(t->val,x->val);
        // cout<<size;
        return head;
        
    }
};