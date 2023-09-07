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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        ListNode* temp = head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        reverse(v.begin()+l-1,v.begin()+r);
       for(int i=0;i<v.size();i++){
           temp->val=v[i];
           temp=temp->next;
       }
        temp=head;
        return head;
    }
};