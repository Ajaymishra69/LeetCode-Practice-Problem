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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head -> next == NULL || head -> next -> next == NULL)
            return head;
        int cnt = 1;
        ListNode* first = head;
        ListNode* sec = head -> next;
        ListNode* lst = head;
        while(lst -> next != NULL)
        {
            lst = lst -> next;
                cnt++;
        }
        int n = cnt/2;
        while(n>0)
        {
            first -> next = first -> next -> next;
            lst -> next = sec;
            sec ->next = NULL;
            first = first -> next;
            lst = sec;
            sec = first -> next;
            n--;
        }
        return head;
    }
};
