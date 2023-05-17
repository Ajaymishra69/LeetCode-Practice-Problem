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
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        vector<int>v;
        int maxi = -1;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n = v.size();
        for(int i =0;i<n/2;i++){
            if(v[i]+v[n-i-1]>maxi)
                maxi=v[i]+v[n-i-1];
        }
        return maxi;
    }
};