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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        for(auto i:lists){
            while(i!=NULL){
                v.push_back(i->val);
                i=i->next;
            }
        }
        sort(v.begin(),v.end());
        int n = v.size()-1;
        if(n<0)
            return NULL;
        int i=1;
        ListNode* head = new ListNode(v[0]);
        ListNode* node = head;
        while(n--){
            ListNode* temp = new ListNode(v[i]);
            head->next=temp;
            head=temp;
            i++;
        }
        return node;
    }
};