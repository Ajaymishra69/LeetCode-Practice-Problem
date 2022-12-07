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
        ListNode* swapPairs(ListNode *head)
        {
            int cnt = 0;
            if (head == NULL || head->next == NULL)
                return head;
            ListNode *temp = head;
            while (temp != NULL)
            {
               	//swap(temp->val,temp->next->val);
                temp = temp->next;
                cnt++;
            }
            temp = head;
            if (cnt % 2 == 0)
                while (temp != NULL)
                {
                    swap(temp->val, temp->next->val);
                    temp = temp->next->next;
                }
            else
            {
                cnt = cnt / 2;
                while (cnt > 0)
                {
                    swap(temp->val, temp->next->val);
                    temp = temp->next->next;
                    cnt--;
                }
            }

            return head;
        }
};