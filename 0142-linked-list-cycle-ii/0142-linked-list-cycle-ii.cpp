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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || (head->next==NULL))
            return NULL;
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *p = head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
                break;
        }
        if(slow!=fast)
            return NULL;
        while(slow!=p){
            slow=slow->next;
            p=p->next;
        }
        return p;
    }
};