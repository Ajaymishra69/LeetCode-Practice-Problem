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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildtree(int left,int right,vector<int>&ll){
        if(left>right)
            return NULL;
        int mid = left+(right-left)/2;
        TreeNode* root = new TreeNode(ll[mid]);
        root->right=buildtree(mid+1,right,ll);
        root->left=buildtree(left,mid-1,ll);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>ll;
        while(head!=NULL){
            ll.push_back(head->val);
            head=head->next;
        }
        int n = ll.size()-1;
        return buildtree(0,n,ll);
    }
};