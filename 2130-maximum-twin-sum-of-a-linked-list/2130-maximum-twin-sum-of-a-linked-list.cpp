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
        int pairSum(ListNode *head)
        {
            if (head->next->next == NULL)
            {
                return (head->val + head->next->val);
            }
            vector<pair<int, int>>p1;
            int ans =0,max = INT_MIN;
            int i =0;
            while(head!=NULL)
            {
                p1.push_back(make_pair(i,head->val));
                head=head->next;
                i++;
            }
            //int n =p1.size();
            for(int j =0;j<i/2;j++)
            {
                ans=p1[j].second+p1[i-1-j].second;
                if(ans>max)
                {
                    max=ans;
                }
            }
            return max;
        }
};