/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* middleNode(ListNode *head)
        {
            if (head->next == NULL)
                return head;
            int cnt = 0;
            ListNode *temp = head;
            while (temp != NULL)
            {
                temp = temp->next;
                cnt++;
            }
           //	temp=head;
            if (cnt % 2 == 0)
            {
               for(int i = 0;i<(cnt/2);i++)
               {
                   head =  head->next;
               }
            }
            else
            {
               for(int i = 0;i<(cnt/2);i++)
               {
                   head =  head->next;
               }
            }

            return head;
        }
};