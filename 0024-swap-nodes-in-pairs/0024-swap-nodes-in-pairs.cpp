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
            ListNode *temp = head;
            int size = 0;
            if (head == NULL || head->next == NULL)
                return head;
            while (temp != NULL)
            {
                size++;
                temp = temp->next;
            }
            temp = head;
            if (size % 2 != 0)
            {
                while (temp->next != NULL)
                {
                    swap(temp->val, temp->next->val);
                    temp = temp->next->next;
                }
            }
            else
            {
                while (temp != NULL)
                {
                    swap(temp->val, temp->next->val);
                    temp = temp->next->next;
                }
            }
            return head;
        }
};